/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:20:52 by mahoang           #+#    #+#             */
/*   Updated: 2020/02/13 17:46:42 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Cub3D.h"
# include "./mlx/mlx.h"

int		main(int ac, char **av)
{
	void *mlx_ptr;
	void *win_ptr;

	mlx_ptr = mlx_init();
	win_ptr=mlx_new_window(mlx_ptr, 1920, 1080, "Cub3d");
	//mlx_new_image(mlx_ptr, 1000, 1000);
	mlx_pixel_put(mlx_ptr, win_ptr, 400, 600, 0xFFFFFF);
	if (ac == 3 && av[1] == ".cub" && (av[2] == "--save" || av[2] == "-s"))
		return (-1);
	if (ac == 2 && av[1] == ".cub")
		return (0);
	else
		return (printf("Error:\nInvalid arguments"));
	mlx_loop(mlx_ptr);
}
