/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 19:53:34 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 03:34:00 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			new->content_size = 0;
			new->content = NULL;
			new->next = NULL;
		}
		else
		{
			new->content = (void *)malloc(content_size);
			new->content = ft_memalloc(content_size);
			ft_memcpy((char*)new->content, (char*)content, content_size);
			new->content_size = content_size;
			new->next = NULL;
		}
		return (new);
	}
	return (NULL);
}
