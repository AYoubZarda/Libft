/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:58:31 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 00:59:56 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

str = (char *)s;
	while (n)
	{
		if (*str == (char)c)
		{
			return (str);
		}
	str++;
	n--;
	}
	return (NULL);
}
