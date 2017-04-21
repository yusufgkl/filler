/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 03:39:46 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 03:39:47 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		len2;

	if (!*little)
		return ((char*)big);
	len2 = ft_strlen((char*)little);
	while (*big && (len-- >= len2))
	{
		if (*big == *little && ft_memcmp(big, little, len2) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
