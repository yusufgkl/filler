/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 03:02:19 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 03:02:28 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	len = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s += 1;
	len = (ft_strlen(s));
	while ((s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
			&& len)
		len--;
	if (!(str = (char*)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = s[len];
	}
	return (str);
}
