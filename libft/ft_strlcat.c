/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:14:29 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 17:15:28 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t check;
	size_t min;

	check = ((int)n - ft_strlen(s1) - 1);
	if (n < ft_strlen(s1))
		min = n;
	else
		min = ft_strlen(s1);
	if ((int)check > 0)
		ft_strncat(s1, s2, check);
	return (ft_strlen(s2) + min);
}
