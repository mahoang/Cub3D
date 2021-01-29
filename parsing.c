/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:08:11 by mahoang           #+#    #+#             */
/*   Updated: 2021/01/29 14:08:47 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_spaceskip(char *line, int *i)
{
    while ((line[*i] == ' ') || (line[*i] == '\t') || (line[*i] == '\e') ||
    (line[*i] == '\n') || (line[*i] == '\r') || (line[*i] == '\v') ||
    (line[*i] == '\f') || (line[*i] == '\t') || (line[*i] == '\b'))
        (*i)++;
    return (1);
}

int     ft_header(t_data, char *line)
{
    int     i;

    i = 0;
    ft_spaceskip(line, &i)
    if ((line[i] == 'R') && (line[i+1] == ' '))
        s->data = ft_res(line, &i);
    else if ((line[i] == 'N' && line[i + 1] == 'O' && (line[i ]+ 2 = ' ')))
        s->data = ft_textures(line, &i);
    else if ((line[i] == 'S' && line[i + 1] == 'O' && (line[i ]+ 2 = ' ')))
        s->data = ft_textures(line, &i);
    else if ((line[i] == 'W' && line[i + 1] == 'E' && (line[i ]+ 2 = ' ')))
        s->data = ft_textures(line, &i);
    else if ((line[i] == 'E' && line[i + 1] == 'A' && (line[i ]+ 2 = ' ')))
        s->data = ft_textures(line, &i);
    else if ((line[i] == 'S' && line[i + 1] == ' '))
        s->data = ft_textures(line, &i);
    else if ((line[i] == 'F' && line[i + 1] == ' '))
        s->data == ft_colour(line, &i)
    else if ((line[i] == 'C' && line[i + 1] == ' '))
        s->data == ft_colour(line, &i)
}   return (0);

