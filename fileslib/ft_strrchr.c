/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:36:47 by hugrene           #+#    #+#             */
/*   Updated: 2022/02/25 14:10:08 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*tmp;

	str = (char *)s;
	tmp = NULL;
	while (*str)
	{
		if (*str == c)
			tmp = str;
		str++;
	}
	if (c == '\0')
		return (str);
	return (tmp);
}
