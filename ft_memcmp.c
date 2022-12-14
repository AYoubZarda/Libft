/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:46:16 by azarda            #+#    #+#             */
/*   Updated: 2022/10/28 18:03:57 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	i = 0;
	if (!n)
		return (0);
	while (str1[i] == str2[i] && i < n -1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
