/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:20:52 by mahoang           #+#    #+#             */
/*   Updated: 2020/02/18 01:22:05 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cub3D.h"

int		main(int ac, char **av)
{
	void *mlx_ptr;
	void *win_ptr;

	//mlx_ptr = mlx_init();
	//win_ptr=mlx_new_window(mlx_ptr, 1920, 1080, "Cub3d");
	//mlx_new_image(mlx_ptr, 1000, 1000);
	//mlx_pixel_put(mlx_ptr, win_ptr, 400, 600, 0xFFFFFF);
	if (ac == 3 && check_arg(av[1], ".cub") == 1 && check_arg(av[2], "--save") == 1)
		return (-1);/*function to print img*/
	if (ac == 2 && check_arg(av[1], ".cub"))
		return (0);/*balancer la fonction qui commence les calculs et l'affichage*/
	else
		return (print_error(1));
	///mlx_loop(mlx_ptr);
}
