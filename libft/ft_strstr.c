/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 19:27:50 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/29 22:21:04 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	while (*big)
	{
		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char*)big);
		big++;
	}
	if (*little == '\0')
		return ((char*)big);
	return (NULL);
}
