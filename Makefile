NAME = calculatrice

SRCS = main.c \
       functions.c

CFLAGS = -Wall -Wextra -Werror -O2

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
