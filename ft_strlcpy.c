/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:43:29 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 16:56:55 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		i = 0;
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main()
{
	//char dst[20] = "";
	//char src[20] = "";
	//char dst1[20] = "";
	//char src1[20] = "";
printf ("%zu\n",ft_strlcpy(NULL,NULL,4));
//printf ("%zu\n",strlcpy(NULL,NULL,4));

return(0);
}*/