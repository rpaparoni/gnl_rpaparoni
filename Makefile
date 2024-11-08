NAME = get_next_line.a
SOURCES = get_next_line.c get_next_line_utils.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJECTS)
        ar rcs $(NAME) $(OBJECTS)

clean:
        $(RM) $(OBJECTS)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re