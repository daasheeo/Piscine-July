NAME = bsq
SRC_DIR = srcs
SRC_FILES = ft_atoi.c ft_split.c ft_strndup.c get_map.c initialize_map.c \
			linked_list.c main.c read_map.c ft_free.c ft_strlen.c \
			ft_get_matrix.c ft_get_bsq.c ft_print_matrix.c
SRCS = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/,$(SRC_FILES:.c=.o))
HEADER = includes

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -c $< -o $@ $(CFLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
