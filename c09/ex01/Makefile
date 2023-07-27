SOURCE	= srcs/
SRC		= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c 
OBJS 	= ${addprefix ${SOURCE},${SRC:.c=.o}}
HEAD = includes
CC 		= gcc 
CFLAGS  = -Wall -Wextra -Werror
NAME = libft.a

.c.o:
					${CC} ${CFLAGS} -I $(HEAD) -c $< -o ${<:.c=.o}
	
${NAME}:	${OBJS}
					ar -rc $(NAME) $(OBJS) 

all: 		$(NAME)

clean:
					rm -rf $(OBJS)

fclean: clean
					rm -rf $(NAME)

re:
					fclean all

.PHONY:	all clean fclean re