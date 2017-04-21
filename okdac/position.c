/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 14:27:31 by cfatrane          #+#    #+#             */
/*   Updated: 2017/04/19 17:08:33 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		position(t_filler *env)
{
	int		i;
	int		j;

	i = 0;
	env->oppon = (env->user == 'O') ? 'X' : 'O';
	while (i < env->y_map)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (env->map[i][j] == env->oppon)
			{
				env->o_pos_x = j;
				env->o_pos_y = i;
			}
			if (env->map[i][j] == env->user)
			{
				env->u_pos_x = j;
				env->u_pos_y = i;
			}
			j++;
		}
		i++;
	}
	env->algo = (env->o_pos_y > env->u_pos_y) ? 1 : 0;
}
