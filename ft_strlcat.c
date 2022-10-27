/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:34:05 by azarda            #+#    #+#             */
/*   Updated: 2022/10/27 01:21:06 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ds;
	size_t	ss;

	i = 0;
	j = 0;
	if (!dest && ! size)
		return (ft_strlen(src));
	ds = ft_strlen(dest);
	ss = ft_strlen(src);
	j = size - ds - 1;
	if (ds < size)
	{
		while (src[i] && i < j)
		{
		dest[ds + i] = src[i];
		i++;
		}
	dest[ds + i] = '\0';
		return (ds + ss);
	}
	return (ss + size);
}
/*
	size_t main()
{
	char str[20] = "zardaayoub";
	char str1[] = "ayoub";
printf ("%zu\n",ft_strlcat(str,str1,20));
printf ("%s" , str);
return(0);
}*/