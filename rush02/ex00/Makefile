NAME	= rush-02
SRC		= dependencies/ft* rush-02.c
OBJS 	= $(SRC:.c=.o)
FLAGS	= -Wall -Wextra -Werror
all: $(NAME)
RM		= /bin/rm -f

$(NAME): $(OBJS)
	gcc $(FLAGS) -o $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(NAME)
fclean:
	$(RM) $(NAME)