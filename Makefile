# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/30 12:54:21 by apavlyuc          #+#    #+#              #
#    Updated: 2019/05/25 12:39:41 by apavlyuc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# target file, which'll be created by makefile
TARGET 			:= libft.a

# directories list
SRC_DIR			:= src
INC_DIR			:= inc
OBJ_DIR			:= build# will be created automatically

CC 				:= gcc
FLAGS 			:= -Wall -Werror -Wextra -Ofast -I./$(INC_DIR)

DIRS			:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(shell find $(SRC_DIR) -type d))
SRCS			:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS			:= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	@ar rc $@ $^
	@ranlib $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(FLAGS)

$(OBJ_DIR):
	@mkdir -p $(DIRS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
