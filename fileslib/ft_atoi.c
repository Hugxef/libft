/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:08:50 by hugrene           #+#    #+#             */
/*   Updated: 2022/02/25 17:24:57 by hugrene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnotnumber(const char *nptr)
{
	int	i;

	i = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\n') || (nptr[i] == '\t')
		|| (nptr[i] == '\v') || (nptr[i] == '\f') || (nptr[i] == '\r'))
		i++;
	return (i++);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			neg;
	long long	res;

	neg = 1;
	res = 0;
	i = ft_isnotnumber(nptr);
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res < 0 && neg == 1)
			return (-1);
		if (res < 0 && neg == -1)
			return (0);
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * neg);
}
