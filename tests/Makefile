# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/10 12:29:57 by marvin            #+#    #+#              #
#    Updated: 2019/07/10 12:29:57 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET			:= checker

SRC_DIR			:= .
INC_DIR			:= .
OBJ_DIR			:= build

CC				:= gcc
CFLAGS			:= -Ofast -I./$(INC_DIR) -I./../inc

NORM_CHECK		:= $(shell command -v norminette)

DIRS			:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(shell find $(SRC_DIR) -type d))
SRCS			:= $(shell find $(SRC_DIR) -type f -name "*.c")
OBJS			:= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))
LIBS			:= ./../libft.a

all: libft $(TARGET)

#		Block			#
#	creating $(TARGET)	#
$(TARGET): $(OBJS)
	@$(CC) $(shell find $(OBJ_DIR) -type f -name "*.o") $(LIBS) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(CFLAGS)

$(OBJ_DIR):
	@mkdir -p $(DIRS)

#		Block			#
#	creating libft		#
libft:
	@make -C ../

#		Block			#
#	describing commands	#
clean:
	@make clean -C ../
	@rm -fR $(OBJ_DIR)
	@rm -f filler.trace
	@rm -f trace

fclean: clean
	@make fclean -C ../
	@rm -fR $(TARGET)

re: fclean all
#		end block		#

c: clean
f: fclean

.PHONY: all libft clean fclean re c f
