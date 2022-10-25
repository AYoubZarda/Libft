/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azarda <azarda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:02:38 by azarda            #+#    #+#             */
/*   Updated: 2022/10/26 00:06:55 by azarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_calcul(const char *s, char d)
{
	int	i;
	int	cont;

	if (s[0] != d)
		cont = 1;
	else
		cont = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] == d && s[i + 1] != d && s[i + 1] != '\0')
			cont++;
		i++;
	}
	return (cont);
}

void	ft_free_(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

char	**ft_my_split(char const *str, char d, int i, int j)
{
	char	**tab;
	int		debut;
	int		fin;

	if (!str)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_calcul(str, d) + 1));
	if (!tab)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] && str[i] == d)
			i++;
		debut = i;
		while (str[i] && str[i] != d)
			i++;
		fin = i;
		if (j < ft_calcul(str, d))
		{
			tab[j++] = ft_substr(str, debut, fin - debut);
			if (!tab[j - 1])
				return (ft_free_(tab), NULL);
		}
	}
	return (tab[j] = NULL, tab);
}

char	**ft_split(char const *st, char c)
{	
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = ft_my_split(st, c, i, j);
	return (tab);
}
