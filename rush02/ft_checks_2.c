/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:31:59 by lmenoni           #+#    #+#             */
/*   Updated: 2024/06/02 18:32:02 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int ft_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int	ft_strcmp_s(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] >= '0' && s2[i] >= '0'
		&& s1[i] != ':' && s2[i] != ':')
		i++;
	if ((s1[i] < '0' || s1[i] == ':') && (s2[i] < '0' || s2[i] == ':'))
		return (0);
	return (s1[i] - s2[i]);
}

int	ft_check(char **mat, char *check, int count)
{
	int	i;
	int	sw;
	int	res;

	sw = 1;
	res= 0;
	while ((*check) != '\0')
	{
		i = 0;
		while (mat[i] && sw == 1)
		{
			if (ft_strcmp_s(check, mat[i]) == 0)
			res++;
			i++;
		}
		sw = 0;
		if (*check == ' ')
			sw = 1;
		check++;
		if (res == count)
		return (1);
	}
	return (0);
}

int	ft_check_nbr(char **mat)
{
	int	res;

	res = 0;
	if (ft_check(mat, "0 1 2 3 4 5 6 7 8 9 ", 10) == 1)
		res++;
	if (ft_check(mat,"10 20 30 40 50 60 70 80 90", 9) == 1)
		res++;
	if (ft_check(mat, "100 1000 1000000 1000000000", 4) == 1)
		res++;
	if (res == 3)
		return (1);
	return (0);
}
