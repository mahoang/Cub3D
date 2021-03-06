/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 00:33:06 by mahoang           #+#    #+#             */
/*   Updated: 2020/02/18 03:30:58 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		check_arg(char *text, char *cmp)
{
	int c;
	int d;

	c = 0;
	d = 0;
	while (text[c] != '\0' && cmp[d] != '\0')
	{
		if (text[c] != cmp[d])
			c++;
		while (text[c] != '\0' && cmp[d] != '\0' && text[c] == cmp[d])
		{
			d++;
			c++;
			if (cmp[d] == '\0')
				return (1);
		}
	}
	return (0);
}

int		print_error(int error)
{
	if (error == 1)
		printf("Error: Invalid arguments");
	if (error == 2)
		printf("Error: Invalid map file");
	return (0);
}
