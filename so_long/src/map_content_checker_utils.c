/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_content_checker_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:22:11 by humartin          #+#    #+#             */
/*   Updated: 2022/08/18 09:22:12 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

int	spawn_on_map(char *map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == 'P')
			return (0);
		i++;
	}
	return (-1);
}

int	collectible_on_map(char *map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == 'C')
			return (0);
		i++;
	}
	return (-1);
}

int	exit_on_map(char *map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == 'E')
			return (0);
		i++;
	}
	return (-1);
}
