# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 00:08:01 by ayermeko          #+#    #+#              #
#    Updated: 2024/11/08 17:13:17 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= convert
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= ScalarConverter.cpp
CC		= c++
OBJ_DIR	= obj
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) done

$(OBJ_DIR):
	@mkdir -p $@

fclean: clean
	@rm -rf $(NAME)
	@echo removed $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo removed $(OBJ_DIR) folder

re: fclean all

.PHONY: all fclean clean re