# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 14:34:40 by andcarva          #+#    #+#              #
#    Updated: 2024/11/07 18:40:20 by andcarva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror -g
OBJ_DIR=obj_libft
SRC_DIR=src_libft
SRC= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))
OBJ_LIST= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

SRC_FILES= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
			ft_isalpha.c \
			ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c \
			
		
	
all: $(NAME)
 
$(NAME): $(OBJ) $(OBJ_LIST) 
	@echo "Creating library $(NAME)"
	@ar rcs $@ $(OBJ) $(OBJ_LIST)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	
bonus: $(OBJ_LIST) $(NAME)
	@ar rcs $(NAME) $(OBJ_LIST)

clean:
	echo "Removing $(OBJ_DIR)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	echo "Removing $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean all