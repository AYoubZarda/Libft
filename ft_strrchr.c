/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:51:05 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 17:45:24 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		len;

	d = (char *)s;
	len = ft_strlen(d);
	if (!d)
		return (NULL);
	while (len >= 0)
	{
		if (d[len] == (char)c)
			return (d + len);
		len--;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = "aaaaaabbbbbbbcccccc";
	int c = 'a' + 256;
	printf("%s\n",ft_strrchr(s,c));
	printf("%s",strrchr(s,c));

}
*/