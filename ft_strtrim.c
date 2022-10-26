/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:01:27 by azarda            #+#    #+#             */
/*   Updated: 2022/10/23 19:06:54 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	
	i = 0;
	
	if (!s1)
		return (NULL);
	if (!set)
		return ((char*)s1);

	j = ft_strlen((char *)s1);
	while(i < ft_strlen((char *)s1) && ft_strchr(set, s1[i]))
		i++;
	j--;
	while(j >= 0 && ft_strchr(set,s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i + 1)));
}