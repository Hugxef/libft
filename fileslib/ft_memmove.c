/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:39:21 by hugrene           #+#    #+#             */
/*   Updated: 2022/02/24 13:24:59 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*dp;
	const unsigned char		*sp;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		dp = dest + n;
		sp = src + n;
		while (n-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		dp = dest;
		sp = src;
		while (n -- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dest);
}
