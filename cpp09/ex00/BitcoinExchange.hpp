/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:22:36 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/06 19:22:36 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP

#include<iostream>
#include <cstdlib>
#include <fstream>
//#include <cstdlib>
#include <cstdlib>
#include <map>
#include <sstream>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string,float> map;
    public:
        BitcoinExchange(std::string filename);
        BitcoinExchange(const BitcoinExchange &orginal);
        BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange &orginal);
        ~BitcoinExchange();
        void read_base(void);
        bool Check_date_isvalid(std::string &dateStr);
        void check_input_txt(std::string filename);
};



#endif
