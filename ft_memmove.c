/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:51:08 by azarda            #+#    #+#             */
/*   Updated: 2022/11/07 10:56:49 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;

	if (dst == src)
		return (dst);
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (sr > ds)
		while (len--)
			*(ds++) = *(sr++);
	else
		while (len--)
			*(ds + len) = *(sr + len);
	return (dst);
}
