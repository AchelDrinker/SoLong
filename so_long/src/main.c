/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:21:53 by humartin          #+#    #+#             */
/*   Updated: 2022/08/18 09:21:53 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

/*
so_long :
- Checks if there is only 1 argument (the map file name).
- Checks if the map respect the subject rules.
- Creates the window with the right size.
- Puts the sprites on the window according to the map.
- Handles user input.
*/
int	main(int argc, char *argv[])
{
	t_data		data;

	if (argc != 2)
		return (argument_error());
	if (map_checker(argv[1]) == -1)
		return (map_error());
	data.map_filename = argv[1];
	initialisation(&data);
	map_parser(&data);
	mlx_hook(data.mlx_win, 2, 1L << 0, key_hook, &data);
	mlx_hook(data.mlx_win, 17, 0, close_window, &data);
	mlx_loop(data.mlx);
	return (0);
}
