/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:58:31 by azarda            #+#    #+#             */
/*   Updated: 2022/10/30 21:19:28 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

str = (unsigned char *)s;
	while (n)
	{
		if (*str == (unsigned char)c)
		{
			return (str);
		}
	str++;
	n--;
	}
	return (NULL);
}
