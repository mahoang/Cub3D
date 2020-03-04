NAME = Cub3D

CC = clang

CFLAGS =

HEADER = cub3d.h

MLXFLAGS = -lmlx -framework OpenGL -framework Appkit

MLX = libmlx.a

SRC = check_error.c \
	Cub3D.c \
	key_action.c
#	get_next_line.c \
	get_next_lline_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\n\033[0;33mCompiling..."
		@make -C mlx/
		cp mlx/$(MLX) .
		cp ./srcs/libft/libft.a .
		$(CC) -o $(NAME) $(MLX) $(MLXFLAGS) $(OBJ)
		@echo "\033[0m"

%.o: %.c
		$(CC) $(CFLAGS) -c $<

clean:
		rm -f $(OBJ) $(MLX)

fclean:
		rm -f $(NAME)

re: fclean all

norm:
		norminette $(SRC) $(HEADER)

.PHONY: all re clean fclean norm
