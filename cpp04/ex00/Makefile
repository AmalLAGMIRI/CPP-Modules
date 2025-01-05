# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 10:08:31 by alagmiri          #+#    #+#              #
#    Updated: 2024/01/08 12:25:40 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME = Animal.cpp \
		 main.cpp Dog.cpp Cat.cpp \
		 WrongAnimal.cpp \
		 WrongCat.cpp \
		 
NAME = Polymorphism
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
	rm -rf $(O_FILE)

fclean: clean
	rm -rf $(NAME)