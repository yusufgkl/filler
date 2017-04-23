/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <ygokol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 12:08:40 by ygokol            #+#    #+#             */
/*   Updated: 2017/04/23 12:16:14 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	get_pos(t_filler *pgm)
{
	int i;
	int j;

	i = 0;
	while (i < pgm->mapy)
	{
		j = 0;
		while (j < pgm->mapx)
		{
			if (pgm->map[i][j] == pgm->enemy_id)
			{
				pgm->o_posx = j;
				pgm->o_posy = i;
			}
			if (pgm->map[i][j] == pgm->enemy_id)
			{
				pgm->m_posx = j;
				pgm->m_posy = i;
			}
			j++;
		}
		i++;
	}
	if (pgm->o_posy > pgm->m_posy)
		pgm->algo = 1;
	else
		pgm->algo = 0;
}
