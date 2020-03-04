/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 03:23:51 by mahoang           #+#    #+#             */
/*   Updated: 2020/03/03 18:15:59 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		read_map(t_glo *s_glo, char *map)
{
	int		ret;
	int		fd;
	char	*line;


	fd = open(map, O_RDONLY);
	if (fd == -1)
		print_error(2);
	while (ret == 1)
	{
		ret = get_next_line(fd, &line);
		if (ft)
	}
}

int		map_check(t_glo *s_glo, char **line)
{
	int i;
	int j;

	if (s_glo->map_data.map[i++][j] == '\n')
	if (ft_strlen(s_glo->t_map.map[i][j]))


}
