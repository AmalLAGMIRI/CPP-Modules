# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 19:25:29 by alagmiri          #+#    #+#              #
#    Updated: 2024/03/06 19:25:29 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME =  main.cpp  BitcoinExchange.cpp \
		 
NAME = btc
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror# -fsanitize=address

O_FILE = $(F_NAME:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	c++ $(CXXFLAGS)  $(O_FILE) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(CXXFLAGS) -c $< -o $@

re: fclean all
clean:
	rm -rf $(O_FILE)

fclean: clean
	rm -rf $(NAME)
