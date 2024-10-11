<<<<<<< HEAD
=======
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/24 11:36:30 by ivotints          #+#    #+#              #
#    Updated: 2024/10/09 15:48:34 by ayermeko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

>>>>>>> 2750aa79c818bb72e441f70b0038f9085b0c8f42
NAME	= zombie
SRCS	= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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

<<<<<<< HEAD
.PHONY: all run vrun clean fclean re
=======
.PHONY: all run vrun clean fclean re
>>>>>>> 2750aa79c818bb72e441f70b0038f9085b0c8f42
