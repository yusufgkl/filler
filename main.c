/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 14:24:44 by cfatrane          #+#    #+#             */
/*   Updated: 2017/04/21 19:34:31 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

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
		if (env->gameover == 1)
			break ;
		get_next_line(0, &line);
		env->y_map = ft_atoi(&line[8]);
		env->x_map = ft_atoi(&line[11]);
		take_map(env);
		if (algo(env) == 0)
			env->ko = 1;
		push_token(env);
	}
	free(env);
	return (0);
}
