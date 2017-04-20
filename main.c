#include "filler.h"
#include <stdio.h>

void print_debug(t_filler *env)
{

	printf("user: %c\n oppon: %c\nx_map: %d\nx_token: %d\ny_token: %d\nu_pos_x: %d\nu_pos_y: %d\no_pos_x: %d\no_pos_y: %d\npush_x: %d\npush_y: %d\nalgo: %d\nko: %d\ngameover: %d\n\n", env->user);

}


int		main(void)
{
	char		*line;
	t_filler	*env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &line);
	env->user = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (42)
	{
		get_next_line(0, &line);
		env->y_map = ft_atoi(&line[8]);
		env->x_map = ft_atoi(&line[11]);
		take_map(env);
		if (algo(env) == 0)
			env->ko = 1;
		push_token(env);
		if (env->gameover == 1)
			break ;
	}
	print_debug(env);
	free(env);
	return (0);
}
