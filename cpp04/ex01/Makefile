# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 09:37:52 by alagmiri          #+#    #+#              #
#    Updated: 2024/01/03 09:37:55 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME = Animal.cpp \
		 Cat.cpp \
		 Dog.cpp \
		 Brain.cpp \
		 main.cpp \
		 
NAME = Brainn
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