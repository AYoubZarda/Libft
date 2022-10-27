/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:18:52 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 18:03:30 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*b;
	char	*c;
	int		i;
	int		j;

	a = (char *) s1;
	b = (char *) s2;
	if (!a)
		return (b);
	i = (ft_strlen(a) + ft_strlen(b) + 1);
	c = malloc(i);
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (a[i])
	{
		c[i] = a[i];
		i++;
	}
	while (b[j])
	{
		c[i] = b[j];
		i++;
		j++;
	}
	c[i] = 0;
	return (c);
}
