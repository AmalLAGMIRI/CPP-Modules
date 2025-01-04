# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 18:42:57 by alagmiri          #+#    #+#              #
#    Updated: 2024/02/05 19:09:51 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME = ScalarConverter.cpp  main.cpp \

NAME = Scalar
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