/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:51:33 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 15:38:00 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		nlen;
	int		a;
	char	*ret;

	nlen = ft_numlen(n);
	if ((ret = (char*)malloc(sizeof(*ret) * (nlen + 2))) == NULL)
		return (NULL);
	ret[nlen + 1] = '\0';
	a = 1;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
	{
		a = -1;
		ret[0] = '-';
	}
	while (nlen != 0)
	{
		ret[nlen--] = a * (n % 10) + '0';
		n /= 10;
		if (ret[nlen] == '-')
			return (ret);
	}
	ret[nlen] = a * (n % 10) + '0';
	return (ret);
}
