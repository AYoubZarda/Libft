/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:19 by azarda            #+#    #+#             */
/*   Updated: 2022/10/20 19:53:58 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_atoi(const char *str)
{

int i;
int s;
int d;
int e;

i = 0;
s = 1;
d = 0;
e = 0;



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
    d = d * 10 + str[i] - '0';
    i++;
}
e = (d * s);
return(e);

}
/*
int main()
{
char str[] = "1234";
    printf("%d",ft_atoi(str));
   
}*/



