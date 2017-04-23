/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <ygokol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 11:48:23 by ygokol            #+#    #+#             */
/*   Updated: 2017/04/23 16:58:06 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	push_piece(t_filler *pgm)
{
	if (pgm->algo == 0)
		pgm->algo = 3;
	else if (pgm->algo == 1)
		pgm->algo = 3;
	else if (pgm->algo == 2)
		pgm->algo = 0;
	else if (pgm->algo == 3)
		pgm->algo = 2;
		
		ft_putnbr(pgm->pushy);
		ft_putchar(' ');
		ft_putnbr(pgm->pushx);
		ft_putchar('\n');
}

int		check_piece(t_filler *pgm, int i, int j)
{
	int		superpose;
	int		y;
	int		x;

	superpose = 0;
	y = 0;
	while (y < pgm->y_piece)
	{
		x = 0;
		while (x < pgm->x_piece)
		{
			if ((pgm->map[i + y][j + x] == pgm->player_id ||
				pgm->map[i + y][j + x] == pgm->player_id + 32)
					&& pgm->piece[y][x] == '*')
				superpose++;
			if ((pgm->map[i + y][j + x] == pgm->enemy_id ||
				pgm->map[i + y][j + x] == pgm->enemy_id + 32)
					&& pgm->piece[y][x] == '*')
				return (0);
			x++;
		}
		y++;
	}
	return ((superpose == 1) ? 1 : 0);
}

int				try_piece(t_filler *pgm, int i, int j)
{
	if (i + pgm->y_piece > pgm->mapy)
		return (0);
	else if (j + pgm->x_piece > pgm->mapx)
		return (0);
	else
		return (check_piece(pgm, i, j));
}

int get_piece(t_filler *pgm, char *line)
{
	int i;
	int j;

	i = 0;
	j = 6;
	pgm->y_piece = ft_atoi(&line[6]);
	while (ft_isdigit(line[j]) || ft_isdigit(line[j]))
		j++;
	pgm->x_piece = ft_atoi(&line[j]);
	if (!pgm->piece)
		if(!(pgm->piece = ft_double_strnew(pgm->y_piece, pgm->x_piece)))
			return (-1);
	while (i < pgm->y_piece)
	{
		get_next_line(0, &line);
		pgm->piece[i] = ft_strdup(line);
		i++;
	}
	return (0);
}
