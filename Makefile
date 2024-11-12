# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 17:02:45 by andcarva          #+#    #+#              #
#    Updated: 2024/11/11 13:21:14 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=cc
CFLAGS=-Wall -Wextra -Werror -g
SRC_DIR=src
OBJ_DIR=obj
OBJ= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
SRC= $(addprefix $(SRC_DIR)/, $(SRC_FILES))

SRC_FILES= ft_printf.c ft_ptf_func.c ft_ptf_hexfunc.c ft_ptf_decfunc.c \
			ft_ptf_util_func.c \

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rcs $@ $(OBJ) 
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	
clean:
	echo "Removing $(OBJ_DIR)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	echo "Removing $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all
