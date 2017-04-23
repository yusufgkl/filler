/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <ygokol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 19:46:28 by ygokol            #+#    #+#             */
/*   Updated: 2017/04/23 13:42:19 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void players_ids(t_filler *pgm, char *line)
{
	pgm->player_id = ft_atoi(line + 10) == 1 ? 'O' : 'X';
	pgm->enemy_id = pgm->player_id == 'O' ? 'X' : 'O';
}

int main(void)
{
	char		*line;
	t_filler	*pgm;

	if (!(pgm = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &line);
	players_ids(pgm, line);
	while (42)
	{
		get_next_line(0, &line);
		pgm->mapy = ft_atoi(&line[8]);
		pgm->mapx = ft_atoi(&line[11]);
		get_map_id(pgm);
		get_map(pgm);
		if (algo(pgm) == 0)
			break ;
			
			push_piece(pgm);
	}
	return (0);
}
