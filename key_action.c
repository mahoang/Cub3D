/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_action.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:56:53 by mahoang           #+#    #+#             */
/*   Updated: 2020/03/03 16:14:35 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cub3d.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	size_t c;

	c = 0;
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int		ft_destroy(t_glo *s_glo, int error)
{
	if (error == 0)
		mlx_destroy_window(s_glo->mlx.ptr, s_glo->mlx.win);
	return (0);
}

int		key_get(int keycode, void *set)
{
	t_glo s_glo;
	ft_putnbr(keycode);
	if (keycode == ESC)
		ft_destroy(&s_glo, 0);
	else if (keycode == W)
		printf("W\n");
	else if (keycode == S)
		return (4);
	else if (keycode == A)
		return (3);
	else if (keycode == D)
		return (3);
	else if (keycode == LEFT)
		return (3);
	else if (keycode == RIGHT)
		return (3);
	return (keycode);
}
