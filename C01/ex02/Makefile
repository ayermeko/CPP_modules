<<<<<<< HEAD
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 21:27:06 by ayermeko          #+#    #+#              #
#    Updated: 2024/10/09 21:47:33 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie
=======
NAME	= zombieHorde
>>>>>>> ae4401940f75b7c92f8d1bf7f82b5cfb6b81a11e
SRCS	= main.cpp
OBJ_DIR	= obj
OBJS	= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= c++
INCLUDE =

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) done

$(OBJ_DIR):
	@mkdir -p $@

run: $(NAME)
	@./$(NAME)

vrun: $(NAME)
	@valgrind --leak-check=full -s ./$(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo removed $(OBJ_DIR) folder

fclean: clean
	@rm -rf $(NAME)
	@echo removed $(NAME)

re: fclean all

.PHONY: all run vrun clean fclean re