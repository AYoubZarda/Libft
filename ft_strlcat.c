/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:34:05 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 01:16:04 by azarda           ###   ########.fr       */
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
	ds = 0;
	ss = 0;
	if(!dest && ! size)
		return ft_strlen(src);
	while (dest[ds])
		ds++;
	while (src[ss])
		ss++;
	if (size <= ds)
		return (size + ss);
	j = size - ds - 1;
	while (src[i] && i < j)
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (ds + ss);
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