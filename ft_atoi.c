/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:19 by azarda            #+#    #+#             */
/*   Updated: 2022/10/28 18:02:30 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	long	d;

s = 1;
d = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
					s *= -1;
					str++;
	}
	while (ft_isdigit(*str))
	{
		if ((d > d * 10 + *str - '0') && (s == -1))
			return (0);
		if ((d > d * 10 + *str - '0') && (s == 1))
			return (-1);
			d = d * 10 + *str - '0';
			str++;
	}
	return ((int)d * s);
}

