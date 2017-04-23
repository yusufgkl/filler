#include "filler.h"

int		algo_down_left(t_filler *pgm)
{
	int		i;
	int		j;

	i = pgm->mapy;
	while (i > 0)
	{
		j = 0;
		while (j < pgm->mapx)
		{
			if (try_piece(pgm, i, j) == 1)
			{
				pgm->pushx = j;
				pgm->pushy = i;
				return (1);
			}
			j++;
		}
		i--;
	}
	return (0);
}

int		algo_up_right(t_filler *pgm)
{
	int		i;
	int		j;

	i = 0;
	while (i < pgm->mapy)
	{
		j = pgm->mapx;
		while (j > 0)
		{
			if (try_piece(pgm, i, j) == 1)
			{
				pgm->pushx = j;
				pgm->pushy = i;
				return (1);
			}
			j--;
		}
		i++;
	}
	return (0);
}

int		algo_down_right(t_filler *pgm)
{
	int		i;
	int		j;

	i = pgm->mapy;
	while (i > 0)
	{
		j = pgm->mapx;
		while (j > 0)
		{
			if (try_piece(pgm, i, j) == 1)
			{
				pgm->pushx = j;
				pgm->pushy = i;
				return (1);
			}
			j--;
		}
		i--;
	}
	return (0);
}

int		algo_up_left(t_filler *pgm)
{
	int		i;
	int		j;

	i = 0;
	while (i < pgm->mapy)
	{
		j = 0;
		while (j < pgm->mapx)
		{
			if (try_piece(pgm, i, j) == 1)
			{
				pgm->pushx = j;
				pgm->pushy = i;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int				algo(t_filler *pgm)
{
	if (pgm->algo == 0)
		return (algo_up_left(pgm));
	else if (pgm->algo == 1)
		return (algo_down_right(pgm));
	else if (pgm->algo == 2)
		return (algo_up_right(pgm));
	else if (pgm->algo == 3)
		return (algo_down_left(pgm));
	else
		return (0);
}
