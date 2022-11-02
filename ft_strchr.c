/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:24:15 by azarda            #+#    #+#             */
/*   Updated: 2022/11/02 14:31:57 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	size_t	i;
	size_t	len;

	d = (char *)s;
	len = ft_strlen(d);
	if ((char)c == '\0')
		return (d + len);
	i = 0;
	while (i < len)
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i++;
	}
	return (0);
}
