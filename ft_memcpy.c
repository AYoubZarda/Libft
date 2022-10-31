/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:58:06 by azarda            #+#    #+#             */
/*   Updated: 2022/10/31 19:39:43 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*ds;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (n)
	{
		ds[i] = sr[i];
		i++;
		n--;
	}
	return (dst);
}
