/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:19 by azarda            #+#    #+#             */
/*   Updated: 2022/10/20 21:11:22 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_atoi(const char *str)
{

int i;
int s;
int d;
int index;

i = 0;
s = 1;
d = 0;
index = 0;



while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
        || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v')
    i++;
if (str[i] == '-' || str[i] == '+')
{
if (str[i] == '-')
    s *= -1;
    i++;
}
while (str[i] >= '0' && str[i] <= '9')
{
    if ((index >= 19) && (s == -1))
    return (0);
    if ((index >= 19) && (s == 1))
    return (-1);
    d = d * 10 + str[i] - '0';
    index++;
    i++;
    
    
}
return(d * s);

}
/*
int main()
{
char str[] = "1234";
    printf("%d",ft_atoi(str));
   
}*/



