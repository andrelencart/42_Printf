# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:02:45 by andcarva          #+#    #+#              #
#    Updated: 2024/11/07 18:40:13 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=cc
CFLAGS=-Wall -Wextra -Werror -g -I $(LIBFT_DIR)
LIBFT_DIR=/home/andcarva/Documents/CommonCore/Printf/libft
SRC_DIR=src
OBJ_DIR=obj
OBJ= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
SRC= $(addprefix $(SRC_DIR)/, $(SRC_FILES))

SRC_FILES= ft_printf.c ft_ptf_func.c ft_ptf_hexfunc.c ft_ptf_decfunc.c \

all: $(NAME)

$(NAME): Libft $(OBJ_DIR) $(OBJ)
	@ar rcs $@ $(OBJ)
	
Libft:
	@make -C $(LIBFT_DIR)
	@make bonus -C $(LIBFT_DIR)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

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