/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <ygokol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 13:23:05 by ygokol            #+#    #+#             */
/*   Updated: 2017/04/23 14:47:22 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	algo_map00(t_filler *pgm)
{
	if (pgm->player_id == 'O')
	{
		if (pgm->algo == 0)
			pgm->algo = 3;
		else if (pgm->algo == 1)
			pgm->algo = 2;
		else if (pgm->algo == 2)
			pgm->algo = 1;
		else if (pgm->algo == 3)
			pgm->algo = 0;
	}
	else
	{
		if (pgm->algo == 0)
			pgm->algo = 1;
		else if (pgm->algo == 1)
			pgm->algo = 2;
		else if (pgm->algo == 2)
			pgm->algo = 3;
		else if (pgm->algo == 3)
			pgm->algo = 0;
	}
}

void	algo_map01(t_filler *pgm)
{
	if (pgm->player_id == 'O')
	{
		if (pgm->algo == 0)
			pgm->algo = 1;
		else if (pgm->algo == 1)
			pgm->algo = 2;
		else if (pgm->algo == 2)
			pgm->algo = 3;
		else if (pgm->algo == 3)
			pgm->algo = 2;
	}
	else
	{
		if (pgm->algo == 0)
			pgm->algo = 1;
		else if (pgm->algo == 1)
			pgm->algo = 2;
		else if (pgm->algo == 2)
			pgm->algo = 3;
		else if (pgm->algo == 3)
			pgm->algo = 1;
	}

}

void	algo_map02(t_filler *pgm)
{
	if (pgm->algo == 0)
		pgm->algo = 1;
	else if (pgm->algo == 1)
		pgm->algo = 2;
	else if (pgm->algo == 2)
		pgm->algo = 3;
	else if (pgm->algo == 3)
		pgm->algo = 0;
}
