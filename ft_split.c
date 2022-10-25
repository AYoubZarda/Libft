/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:27:21 by azarda            #+#    #+#             */
/*   Updated: 2022/10/25 18:31:08 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_calcul(const char *s, char d)
{
	int i;
	int cont;
	
	if (s[0] != d)
		cont = 1;
	else
		cont = 0;
	while(s[i])
	{
	if (s[i] && s[i] == d && s[i + 1] != d)
	cont++;
		i++;
	}
	 return (cont);  
}
// char    **ft_split(char const *s, char c)
// {
	

	
// }
int main()
{
char *d = "zarda ayoub ahvg kvj     ";
printf("%d\n", ft_calcul(d, ' '));
}