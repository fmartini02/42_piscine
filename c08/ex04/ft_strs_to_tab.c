/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:43:35 by francema          #+#    #+#             */
/*   Updated: 2024/06/05 15:35:02 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	r;

	r = 0;
	while (s[r])
		r++;
	return (r);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dup;
	int		i;

	size = ft_strlen(src);
	dup = malloc (sizeof(char) * size + 1);
	i = 0;
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	char		*cpy;

	i = 0;
	if (ac >= 2)
	{
		tab = malloc(sizeof(t_stock_str) * (ac + 1));
		cpy = malloc(sizeof(char) * ft_strlen(av[i]) - 1);
		if (!tab || !cpy)
			return (NULL);
		while (i < (ac -1))
		{
			tab[i].size = ft_strlen(av[i]);
			tab[i].str = av[i];
			tab[i].copy = ft_strdup(av[i]);
			i++;
		}
	}
	else
		return (NULL);
	tab[i].str = 0;
	return (tab);
}
