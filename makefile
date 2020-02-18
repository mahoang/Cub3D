NAME = Cub3D

CC = clang

CFLAGS =

HEADER = Cub3D.h

MLXFLAGS = -lmlx -framework OpenGL -framework Appkit

MLX = libmlx.dylib

SRC = check_error.c \
	Cub3D.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\n\033[0;33mCompiling..."
		@make -C mlx/
		cp mlx/$(MLX) .
		$(CC) -o $(NAME) $(MLX) $(MLXFLAGS) $(OBJ)
		@echo "\033[0m"

%.o: %.c
		$(CC) $(CFLAGS) -c $<

clean:
		rm -f $(OBJ) $(MLX)

flcean:
		rm -f $(NAME)

re: fclean all

norm:
		norminette $(SRC) $(HEADER)

.PHONY: all re clean fclean norm
