# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 11:43:33 by ayermeko          #+#    #+#              #
#    Updated: 2024/11/30 13:08:27 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= templates
SRCS	= main.cpp
OBJ_DIR	= obj
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= c++
INCLUDE	= includes/
VPATH	= src/


all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
#	@echo $(NAME) done

$(OBJ_DIR):
	@mkdir -p $@

run: $(NAME)
	@./$(NAME)

vrun: $(NAME)
	@valgrind --leak-check=full --show-error-list=yes ./$(NAME)

clean:
	@rm -rf $(OBJ_DIR)
#@echo removed $(OBJ_DIR) folder

fclean: clean
	@rm -rf $(NAME)
#@echo removed $(NAME)

re: fclean all

.PHONY: all run vrun clean fclean re