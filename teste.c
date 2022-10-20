/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:17:42 by azarda            #+#    #+#             */
/*   Updated: 2022/10/17 00:06:01 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i =0;
	while (((unsigned char*)s1)[i]!='\0' && ((unsigned char *)s2)[i] != '\0' && i < n)
	
	{
		if  (((unsigned char*)s1)[i]!= ((unsigned char *)s2)[i])
			return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
			
	}
	return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
int main()
{

	/*int s1[100]={256,2,3,4};
	int s2[100]={4,7,8,9};
	printf("%d\n",memcmp(s1,s2,1));
	printf("%d\n",ft_memcmp(s1,s2,1));
	*/
	 char s1[100] = "qbacdsvfdbdfabsdsbsetfgsbgs";
	 char s2[100] = "deabfdafdbdfbdfsbdfgbsdfbsg";
	printf("%d\n",memcmp(s1,s2,10));
	printf("%d\n",ft_memcmp(s1,s2,10));
	 
}
