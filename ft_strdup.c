/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:10:34 by azarda            #+#    #+#             */
/*   Updated: 2022/10/31 14:22:34 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sr;
	int		i;

	i = 0;
	sr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!sr)
		return (NULL);
	while (s1[i])
	{
		sr[i] = s1[i];
		i++;
	}
	sr[i] = '\0';
	return (sr);
}
