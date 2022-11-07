/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:51:08 by azarda            #+#    #+#             */
/*   Updated: 2022/11/07 10:28:42 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	if (dst == src)
		return (dst);
	ds = (char *)dst;
	sr = (char *)src;
	if (sr > ds)
		while (len--)
	*(ds++) = *(sr++);
	else
		while (len--)
	*(ds + len) = *(sr + len);
	return (dst);
}
