# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:02:45 by andcarva          #+#    #+#              #
#    Updated: 2024/11/05 18:38:04 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
CC= cc
CFLAGS= -Wall -Wextra -Werror -g
LIBFT_DIR= libft
INCLUDE_DIR= includes
SRC_DIR= src
OBJ_DIR= obj
OBJ= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
SRC= $(addprefix $(SRC_DIR)/, $(SRC_FILES))

SRC_FILES= ft_printf.c ft_printf_rules.c \

all: $(NAME)

$(NAME): $(OBJ)
	echo "Creating library $(NAME)"
	@make -C $(LIBFT_DIR)
	@ar rcs $@ $?

%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
clean:
	echo "Removing $(OBJ_DIR)"
	@make clean -C $(LIBFT_DIR)
	@rm -rf $(OBJ_DIR)
	
fclean: clean
	echo "Removing $(NAME)"
	@make fclean -C $(LIBFT_DIR)
	@rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all