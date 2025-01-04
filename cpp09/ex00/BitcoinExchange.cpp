/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:13:25 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/06 19:13:25 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>
#include <ctime>
#include <cstring>

BitcoinExchange::BitcoinExchange(std::string filename)
{
    read_base();
    check_input_txt(filename);
}

BitcoinExchange::BitcoinExchange()
{
    // std::cout<< "constrctor par defaut" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
    // std::cout<<"Destrctor" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &orginal)
{
    // std::cout<<"constrctor par copier" << std::endl;
    *this = orginal;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &orginal)
{
    // std::cout<<"operator assinment" << std::endl;

    if (this != &orginal)
    {
        this-> map = orginal.map;
    }

    return *this;
}

bool BitcoinExchange::Check_date_isvalid(std:: string &dateStr)
{
    std::istringstream iss(dateStr);
    std::string buf;
    int year = 0;
    int month = 0;
    int day = 0;
    char c[2];
    if (!(iss >> year >> c[0] >> month >> c[1] >> day))
    {
        std::cout << "not valid" << std::endl;
        return false;
    }   

    std::string tmp;
    if (c[0] != '-' || c[1] != '-' || (iss >> tmp))
    {
        std::cout << "not valid" << std::endl;
        return false;
    }

    std::tm t;
    std::memset(&t, 0, sizeof(std::tm));
    t.tm_year = year - 1900;
    t.tm_mday = day;
    t.tm_mon = month - 1; 
    t.tm_hour = 12; 

    char p1[100], p2[100];
    std::memset(&p2, 0, sizeof(p2));
    std::memset(&p1, 0, sizeof(p1));

    strftime(p1, 100, "%Y-%m-%d", &t);
    std::time_t time = mktime(&t); //second 

    strftime(p2, 100, "%Y-%m-%d", std::localtime(&time)); 

    // std::cout << p1 << std::endl; 
    // std::cout << p2 << std::endl; 

    if (std::strcmp(p1, p2))
    {
       // std::cout << "not valid" << std::endl;
        return false;
    }

    dateStr = std::string(p2);

    return true;
}

void BitcoinExchange::read_base()
{
    std::string buf;
    std::ifstream inputfile_database("data.csv");
    std:: string  date;
    float value;
    if(!inputfile_database)
    {
        std::cerr<< "not open file database !" << std::endl;
        exit(1);
    }

    std::getline(inputfile_database,buf);
    while (std::getline(inputfile_database,buf))
    {
        int  i = buf.find(",");
        //std::cout<< i << std::endl;
        date = buf.substr(0,i);
        if (!Check_date_isvalid(date))
        {
            std::cerr << "date error: " << date << std::endl;
            exit(1);
        }
        std::stringstream ss(buf.substr(i + 1).c_str());
        if (!(ss >> value))
        {
            std::cerr << "value error!" << std::endl;
            exit(1);
        }
       // std::cout << value << std::endl;
        map[date] = value;

        if (ss >> date)
        {
            std::cerr << "date  error: " << date << std::endl;
            exit(1);
        }
    }
    inputfile_database.close();
}

int Techeck_value(float value)
{
    if (value < 0 )
    {
        std::cerr << "Error: not a valid number range  negtif false 0 l' 1000"  << std::endl;
        return 0;
    }
    else if(value > 1000.0)
    {
            std::cerr << "Error: not a valid number range  negtif false 0 l' 1000" << std::endl << std::endl;
        return 0;
    }
    return 1;
 
}

void BitcoinExchange::check_input_txt(std::string filename)
{
    std::string buf;
    std::string date;
    float  value;

    std::ifstream inputfile;
    
    inputfile.open(filename.c_str());
    
    if(!inputfile.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    std::getline(inputfile, buf);
    if (buf != "date | value")
    {
        std::cout << "bad input " << buf << std::endl;
        inputfile.close();
        return;
    }
    
    while (std::getline(inputfile,buf))
    {
        size_t i = buf.find(" | ");
        if ( i  == std::string::npos)
        {
            std::cout << "bad input " << buf << std::endl;
            continue;
        }
        date = buf.substr(0,i);
        if(!Check_date_isvalid(date))
        {
            std::cout << "Error: Invalid Input => " << date << std::endl;
            continue;
        }

       std::stringstream ss(buf.substr(i+3));
       std::string tmp;

        if (!(ss >> value)) 
        {
            std::cout << "Error: Invalid Input 1 => " << buf.substr(i+3) << std::endl;
            continue;
        }
        if (ss >> tmp) 
        {
            std::cout << "Error: Invalid Input 2  => " << buf.substr(i+3) << std::endl;
            continue;
        }

        // std::cout << buf.substr(i+3)  <<  value << std::endl;
        if(!Techeck_value(value))
            continue;
        std::map<std::string, float>::iterator it = map.lower_bound(date);
        if (it != map.end() && it->first == date)
            it++;
        if (it == map.begin())
        {
            std::cout << "ERROR" << std::endl;
            continue;
        }
        it--;
        
        std::cout << date << " => " << value <<" = " << value * it->second << std::endl;
    }
    inputfile.close();
}



