# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 00:08:01 by ayermeko          #+#    #+#              #
#    Updated: 2024/11/22 14:09:38 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= ident
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= main.cpp realType.cpp Base.cpp
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