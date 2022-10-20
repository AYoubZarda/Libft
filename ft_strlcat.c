/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:34:05 by azarda            #+#    #+#             */
/*   Updated: 2022/10/19 19:15:30 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
   
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    j;
    size_t    ds;
    size_t    ss;

    i = 0;
    j = 0;
    ds = 0;
    ss = 0;
    while (dst[ds])
        ds++;
    while (src[ss])
        ss++;
    if (dstsize <= ds)
        return (dstsize + ss);
    j = dstsize - ds - 1;
    while (src[i] && i < j)
    {
        dst[ds + i] = src[i];
        i++;
    }
      dst[ds + i] = '\0';
    return (ds + ss);
}
/*
    int main()
{
    char str[20] = "zardaayoub";
    char str1[] = "ayoub";
printf ("%zu\n",ft_strlcat(str,str1,20));
printf ("%s" , str);
return(0);
}*/