/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:40:17 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/28 15:40:13 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char *s1, char *s2, size_t n)
{
	if (!s1 || !s2 || !n)
		return (1);
	if (ft_strblank(s1) || ft_strblank(s2))
		return (1);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
