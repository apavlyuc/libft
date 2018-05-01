NAME = libft.a

SOURCES = $(wildcard *.c)
OBJECTS = $(addprefix obj/, $(SOURCES:.c=.o))

CC = gcc
FLAGS ?= -c -Wall -Wextra -Werror
FLAGS += -I./

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $@ $^
	@ranlib $@

obj:
	@mkdir obj/

obj/%.o: ./%.c | obj
	@$(CC) $(FLAGS) $< -o $@

clean:
	@rm -rf obj/

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
