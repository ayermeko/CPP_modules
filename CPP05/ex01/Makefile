# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 21:28:59 by ayermeko          #+#    #+#              #
#    Updated: 2024/10/31 16:10:14 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= Bureaucrat.cpp main.cpp Form.cpp
CC		= c++
OBJ_DIR	= obj
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
INCLUDE	=

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) done

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo removed $(OBJ_DIR) folder

fclean: clean
	@rm -rf $(NAME)
	@echo removed $(NAME)

re: fclean all

.PHONY: all clean fclean re