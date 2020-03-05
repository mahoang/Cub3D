/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:21:25 by mahoang           #+#    #+#             */
/*   Updated: 2020/03/03 17:35:35 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "./mlx/mlx.h"
# include "./srcs/libft/libft.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

# define WHITE 0x00FFFFFF

# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2
# define LEFT 123
# define RIGHT 124

typedef struct		map_data
{
	int				res_x;
	int				res_y;
	int				north;
	int				south;
	int				west;
	int				east;
	int				floor_color;
	int				sky_color;
	char			**map;

}					t_map;

typedef struct		ray_data
{
	double			posX;
	double			posY;
}					t_ray;

typedef struct		s_mlx
{
	void			*ptr;
	void			*win;
}					t_mlx;

typedef struct		cub_map
{
	int				i;
	int				j;
}					t_cub_map;

typedef struct		s_glo
{
	t_mlx			mlx;
	t_map			map;
	t_ray			ray;
	t_cub_map		cub;
}					t_glo;

int		check_arg(char *text, char *cmp);
int		print_error(int error);
int		key_get(int keycode, void *set);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_destroy(t_glo *s_glo, int error);
#endif
