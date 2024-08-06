/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_syntax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:06:56 by ucolla            #+#    #+#             */
/*   Updated: 2024/08/06 16:06:59 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

static int	ft_skip_map(int fd)
{
	char	*line;
	char	*trm;

	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		trm = ft_strtrim(line, " \t\n\v\f\r");
		free(line);
		if (trm[0] == '\0')
		{
			free(trm);
			continue ;
		}
		if (ft_isalpha(trm[0]))
		{
			free(trm);
			return (1);
		}
		free(trm);
	}
	return (0);
}

void	ft_check_syntax(int fd)
{
	char	*trm;
	char	*line;
	int		flag;

	flag = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		trm = ft_strtrim(line, " \t\n\v\f\r");
		free(line);
		if (ft_isdigit(trm[0]) || ((trm[0]) == 'S' && ft_isdigit(trm[1])))
			flag = ft_skip_map(fd);
		if (ft_isalpha(trm[0]) && flag == 1)
		{
			free(trm);
			get_next_line(-42);
			ft_error("Map not the last");
		}
		free(trm);
	}
	get_next_line(-42);
}
