/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:21:28 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/14 21:03:35 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str, const void *str2, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	*p2;
	unsigned char	c1;

	p = (unsigned char *)str;
	p2 = (unsigned char *)str2;
	c1 = (unsigned char)c;
	while (len)
	{
		if ((*p++ = *p2++) == c1)
			return (p);
		len--;
	}
	return (NULL);
}
