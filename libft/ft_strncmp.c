/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:28:37 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 03:03:32 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s12;
	unsigned char	*s22;
	size_t			i;

	i = 0;
	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (s12[i] == s22[i] && (i + 1) < n && s12[i] != '\0' && s22[i] != '\0')
		i++;
	return (s12[i] - s22[i]);
}
