/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:10:34 by azarda            #+#    #+#             */
/*   Updated: 2022/10/19 23:24:28 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
char *sr;
    
   if(! (sr =(char*)malloc(ft_strlen(s1) + 1)))
    return NULL;
    ft_memcpy(sr,s1,ft_strlen(s1)+1);
    return (sr);
}