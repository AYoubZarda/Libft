/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:54:59 by azarda            #+#    #+#             */
/*   Updated: 2022/10/18 17:21:11 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}
/*
int main()
{
  char str[] = "zarda";
  ft_bzero(str,2);
 printf("%s\n", str);
 return(0);
}*/
