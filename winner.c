/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   winner.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <ygokol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:32:15 by ygokol            #+#    #+#             */
/*   Updated: 2017/04/21 14:19:49 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include "libft/libft.h"
#include <fcntl.h>

void print_winner(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] == '/')
		{
			ft_putstr("\n \033[34m _-_-_-_- ");
			while (str[i] != '.' && str[i + 1] != 'f')
			{
				ft_putchar(str[i]);
				i++;
			}
			ft_putendl(".filler WON THE BATTLE -_-_-_-_\033[0m \n");
		}
		i++;
	}
}

int main(int args, char **argv)
{
	int fd;
	char *line;

	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		print_winner(line);
	}
return (0);
}
