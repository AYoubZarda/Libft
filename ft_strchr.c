/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:24:15 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 17:44:07 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;
	int		i;

	i = 0;
	d = (char *)s;
	if ((char)c == '\0')
		return (d + ft_strlen(d));
	while (d[i] != '\0')
	{
		if (d[i] == (char)c)
			return (&d[i]);
		i++;
	}
	return (0);
}
/*
 int main()
{
	char s[] = "zsrda";
	//int c = 's';
   // printf("%s\n",ft_strchr(s, 0));
	printf("%s",strchr(s, 0));

	return(0);
	 
}
*/