/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:21:41 by hugrene           #+#    #+#             */
/*   Updated: 2022/02/24 16:19:17 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int search, size_t l)
{
	unsigned char	*ptr;
	unsigned char	c;
	size_t			i;

	ptr = (unsigned char *)mem;
	c = (unsigned char)search;
	i = 0;
	while (i < l)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (0);
}
