#include "filler.h"

void ft_print(int fd, char *str1, char c, char *str2)
{
	ft_putstr_fd(str1, fd);
	ft_putchar_fd(c, fd);
	ft_putstr_fd(str2, fd);
}


void color_map(char *map)
{
	int i;

	i = 0;
	while (map[i])
	{
		if (map[i] == 'O')
			ft_print(2, CYAN, 'O', END);
		else if (map[i] == 'X')
			ft_print(2, RED, 'X', END);
		else
			ft_print(2, BLUE, '.', END);
		i++;
	}
	ft_putendl_fd("", 2);
}

void		get_map_id(t_filler *pgm)
{
	if (pgm->mapy == 24)
		pgm->map_id = 1;
	else if (pgm->mapy == 100)
		pgm->map_id = 2;
	else
		pgm->map_id = 0;
}

int			get_map(t_filler *pgm)
{
	char	*line;
	int		i;

	i = 0;
	if (!pgm->map)
		if (!(pgm->map = ft_double_strnew(pgm->mapy, pgm->mapx)))
			return (-1);
	get_next_line(0, &line);
	while (i <= pgm->mapy)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
		{
			pgm->map[i] = ft_strdup(line + 4);
			if (SETCOLORS == 1)
				color_map(pgm->map[i]);
		}
		else
			get_piece(pgm, line);
		i++;
	}
	if (pgm->o_posx == 0 && pgm->o_posy == 0 &&
			pgm->m_posx == 0 && pgm->m_posy == 0)
		get_pos(pgm);
	return (0);
}
