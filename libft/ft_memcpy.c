/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:00:11 by ygokol            #+#    #+#             */
/*   Updated: 2017/01/10 20:37:51 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str, const void *str2, size_t len)
{
	unsigned char	*p;
	const char		*p2;

	p = str;
	p2 = str2;
	while (len--)
		*p++ = *p2++;
	return (str);
}
