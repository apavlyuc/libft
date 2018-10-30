# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apavlyuc <apavlyuc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/30 12:54:21 by apavlyuc          #+#    #+#              #
#    Updated: 2018/10/30 13:18:48 by apavlyuc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# target file, which'll be created by makefile
TARGET 			:= libft.a

# directories list
SRC_DIR			:= src
INC_DIR			:= inc
OBJ_DIR			:= build# will be created automatically

CC 				:= gcc
FLAGS 			:= -Wall -Wextra -Werror -I./$(INC_DIR)

# check norms, for 42-school. Need installed norminette
NORM_CHECK		:= $(shell command -v norminette)

DIRS			:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(shell find $(SRC_DIR) -type d))
SRCS			:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS			:= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	@ar rc $@ $^
	@ranlib $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFALGS)

$(OBJ_DIR):
	@mkdir -p $(DIRS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(TARGET)

re: fclean all

norm:
ifeq (,$(NORM_CHECK))
	@echo "DEUS VULT!!1"
else
	@find . -type f -name ".*[ch]" -exec norminette {} \+
endif

.PHONY: all clean fclean re
