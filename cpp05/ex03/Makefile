# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 22:01:12 by alagmiri          #+#    #+#              #
#    Updated: 2024/01/21 22:01:12 by alagmiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

F_NAME = Bureaucrat.cpp  main.cpp  AForm.cpp  ShrubberyCreationForm.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
NAME = internn
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