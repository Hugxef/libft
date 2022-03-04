/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:08:49 by hugrene           #+#    #+#             */
/*   Updated: 2022/03/01 13:48:49 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getstr(char *str, long nbr, size_t len)
{
	while (nbr > 0)
	{
		*(str + len--) = nbr % 10 + '0';
		nbr /= 10;
	}
	return (len);
}

static size_t	ft_getlen(int n, size_t len)
{
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	len;

	nbr = n;
	len = 0;
	if (n <= 0)
	{
		nbr = -nbr;
		len = 1;
	}
	len = ft_getlen(n, len);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	*(str + len--) = '\0';
	len = ft_getstr(str, nbr, len);
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
