/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:20:38 by azarda            #+#    #+#             */
/*   Updated: 2022/10/22 16:15:44 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

str = (char *)s;

	while (n)
	{
		if (*str == (char)c)
		{
			return (str);
		}
	str++;
	n--;
	}
	return (NULL);
}

 	/*int main()
 {
	char s[] = "zarda";
	printf("%s\n",ft_memchr(s,'d',4));
 }*/