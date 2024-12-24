# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/24 15:32:33 by ayermeko          #+#    #+#              #
#    Updated: 2024/12/24 16:09:20 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= RPN
SRCS	= main.cpp rpn.cpp
OBJ_DIR	= obj
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= g++
INCLUDE	= includes/
VPATH	= src/


all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all run vrun clean fclean re