/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:58:06 by azarda            #+#    #+#             */
/*   Updated: 2022/10/19 03:12:12 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *sr;
    unsigned  char *ds;
    size_t i;
    
    if(dst == NULL && src == NULL)
    return NULL;
    i = 0;
    ds = (unsigned char *)dst;
    sr = (unsigned char *)src;
    
      while(n)
    {
        ds[i] = sr[i];
        i++;
        n--;
    }
    return(dst);
}
/*
int main()
{
char str1[] = "abcdef";
//char str[] = "123456";
printf("%s\n",memcpy(str1 +2,str1,5));
printf("%s\n",ft_memcpy(str1 +2,str1,5));
}*/