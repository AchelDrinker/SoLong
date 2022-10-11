/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:20:29 by humartin          #+#    #+#             */
/*   Updated: 2022/08/18 09:20:31 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

int	map_error(void)
{
	ft_putstr("Error\nInvalid map\n");
	return (-1);
}

int	argument_error(void)
{
	ft_putstr("Error\nInvalid number of arguments\n");
	return (-1);
}
