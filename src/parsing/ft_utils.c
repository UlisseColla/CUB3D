/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <ucolla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:07:42 by ucolla            #+#    #+#             */
/*   Updated: 2024/08/06 16:07:44 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_matlen(char **mat)
{
	int	i;

	i = 0;
	while (mat[i])
		i++;
	return (i);
}
