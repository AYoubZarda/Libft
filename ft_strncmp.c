/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:22:55 by azarda            #+#    #+#             */
/*   Updated: 2022/10/19 21:42:54 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
size_t i;
i = 0;

if (n == 0)
return (0);
while(s1[i] && s2[i] && s1[i] ==  s2[i] && i < n - 1)
    i++;
    return(unsigned char)(s1[i]) - (unsigned char)(s2[i]);
}
/*
int main()
{
    char s1[] = "abcdef";
    char s2[] = "abcdef\0ghijklmnop";
    printf("%d\n",ft_strncmp(s1,s2,6));
    printf("%d\n",strncmp(s1,s2,6));
}*/
