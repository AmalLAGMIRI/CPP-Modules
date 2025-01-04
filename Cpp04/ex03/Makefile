# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 13:22:19 by alagmiri          #+#    #+#              #
#    Updated: 2024/01/07 13:22:19 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME =  main.cpp AMateria.cpp  Character.cpp  Ice.cpp  Cure.cpp MateriaSource.cpp
		  
NAME = interfacee
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

O_FILE = $(F_NAME:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	c++ $(CXXFLAGS)  $(O_FILE) -o $(NAME)

%.o: %.cpp *.hpp
	c++ $(CXXFLAGS) -c $< -o $@


re: fclean all
clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)