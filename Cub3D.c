/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:20:52 by mahoang           #+#    #+#             */
/*   Updated: 2020/02/21 14:06:46 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int ac, char **av)
{
	t_glo s_glo;

	s_glo.mlx.ptr = NULL;
	s_glo.mlx.win = NULL;
	s_glo.mlx.ptr = mlx_init();
	s_glo.mlx.win = mlx_new_window(s_glo.mlx.ptr, 800, 600, "Cub3d");
	//mlx_new_image(mlx_ptr, 800, 600);
	//mlx_pixel_put(mlx.ptr, mlx.win, 400, 300, WHITE);
	mlx_hook(s_glo.mlx.win, 2, 0, key_get, &s_glo);
	//mlx_hook(mlx.win, 17, 0, key_get, &mlx);

	//mlx_key_hook(s_glo.mlx.win, key_get, &s_glo);
	//mlx_loop_hook(mlx.ptr, key_get, &mlx);
	mlx_loop(s_glo.mlx.ptr);

	if (ac == 3 && check_arg(av[1], ".cub") == 1 && check_arg(av[2], "--save") == 1)
		return (-1);/*function to print img*/
	if (ac == 2 && check_arg(av[1], ".cub"))
		return (0);/*balancer la fonction qui commence les calculs et l'affichage*/
	else
		return (print_error(1));

}
