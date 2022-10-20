/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:11:53 by azarda            #+#    #+#             */
/*   Updated: 2022/10/18 17:32:11 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
size_t i;
size_t j;

i = 0;

if (needle[i] == '\0')
return ((char*)haystack);
while (haystack[i] != '\0' && i < len)
{
    j = 0;
    while(haystack[i+j] == needle[j] && i + j < len)
    {
        if(needle[j + 1] == '\0')
        return ((char *)haystack + i);
        j++;
    }
i++;
}
return NULL;    
}
/*
int main ()
{
    char s1[] = "ayoub zarda 115";
    char s2[] = "ar";
    printf("%s\n", ft_strnstr(s1,s2,9));
}*/