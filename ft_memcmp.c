/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 00:46:16 by azarda            #+#    #+#             */
/*   Updated: 2022/10/21 19:07:12 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
    
    str1 = ((unsigned char *)s1);
    str2 = ((unsigned char *)s2);
    i = 0;
    if(!n)
    return (0); 
    while (str1[i] == str2[i] && i < n -1)
    {
       i++;
    }
    return (str1[i] - str2[i]);
}
/*
int main()

{

	int s1[100]={4,7,8,4};
	int s2[100]={4,7,3,9};
	printf("%d\n",memcmp(s1,s2,16));
	printf("%d\n",ft_memcmp(s1,s2,16));
}

{
	

	 int  s1 = 564\06;
	 int  s2 = 6;
	printf("%d\n",memcmp(s1,s2,4));
	printf("%d\n",ft_memcmp(s1,s2,4));
	 
}*/