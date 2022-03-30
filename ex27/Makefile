SRC = ft_display_file.c

OBJS = ft_display_file.o

GCC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

RM = rm -rf

$(NAME):
	$(GCC) $(CFLAGS) -c $(SRC)
	$(GCC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re