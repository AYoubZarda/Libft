/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:05:29 by azarda            #+#    #+#             */
/*   Updated: 2022/10/27 00:35:16 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_size(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	if (n == 0)
		c++;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		size;
	long	nbr;

	nbr = n;
	size = ft_get_size(nbr);
	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	tab[size--] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		tab[0] = '-';
	}
	if (nbr == 0)
		tab[size] = '0';
	while (nbr != 0)
	{
		tab[size--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (tab);
}
