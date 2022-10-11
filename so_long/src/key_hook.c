/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <humartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:21:43 by humartin          #+#    #+#             */
/*   Updated: 2022/08/18 09:21:44 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/so_long.h"

/*
key_hook :
- Adds the movement to the character.
- Adds the ability to close the game by pressing ESC key.
*/
int	key_hook(int keycode, t_data *data)
{
	if (keycode == 13)
		move_up(data);
	else if (keycode == 1)
		move_down(data);
	else if (keycode == 2)
		move_right(data);
	else if (keycode == 0)
		move_left(data);
	if (keycode == 53)
		close_window(data);
	return (0);
}

void	move_left(t_data *data)
{
	if (move_tester(data, data->player_position_x - 1,
			data->player_position_y) == 0)
	{
		put_step_nbr();
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/Grass.xpm");
		data->player_position_x--;
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/player.xpm");
	}
}

void	move_right(t_data *data)
{
	if (move_tester(data, data->player_position_x + 1,
			data->player_position_y) == 0)
	{
		put_step_nbr();
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/Grass.xpm");
		data->player_position_x++;
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/player.xpm");
	}
}

void	move_down(t_data *data)
{
	if (move_tester(data, data->player_position_x,
			data->player_position_y + 1) == 0)
	{
		put_step_nbr();
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/Grass.xpm");
		data->player_position_y++;
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/player.xpm");
	}
}

void	move_up(t_data *data)
{
	if (move_tester(data, data->player_position_x,
			data->player_position_y - 1) == 0)
	{
		put_step_nbr();
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/Grass.xpm");
		data->player_position_y--;
		put_sprite(data->player_position_x,
			data->player_position_y, data, "sprites/player.xpm");
	}
}
