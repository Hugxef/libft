/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:52:59 by hugrene           #+#    #+#             */
/*   Updated: 2022/02/25 15:29:32 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	litlen;

	if (*little == '\0')
		return ((char *)big);
	litlen = ft_strlen(little);
	while (*big && n-- >= litlen)
	{
		if (*big == *little && ft_memcmp(big, little, litlen) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
