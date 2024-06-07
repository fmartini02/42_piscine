/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 18:14:25 by lmenoni           #+#    #+#             */
/*   Updated: 2024/06/02 21:22:12 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_check_dict(char **mtx)
{
	int i;

	i = 0;
	while(mtx[i])
	{
		if(!(ft_check_rules(mtx[i])))
			return(0);
		i++;
	}
	if(ft_check_dup(mtx) && ft_check_nbr(mtx))
		mtx = ft_sort_mtx(mtx);
	else
		return(0);
	return(1);
}

int	ft_check_dup(char **mat)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (mat[i])
	{
		j = 1;
		while (mat[i + j])
		{
			if (ft_strncmp(mat[i], mat[i + j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_input(int arc, char **arv)
{
	int	i;

	i = 0;
	if (arc < 2)
		return (0);
	if (arc > 3)
		return (0);
	while (arv[1][i] >= '0' && arv[1][i] <= '9' && arv[1][i] != '\0')
		i++;
	if (arv[1][i] != '\0')
		return (0);
	if (arc == 2)
		return (2);
	if (arc == 3)
		return (3);
	return (0);
}

int	ft_check_empty_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int ft_check_rules(char *str)
{
	int	i;

	i = 0;
	if (ft_check_empty_line(str))
		return (0);
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != ' ' && str[i] != ':' && (str[i] <= 9 || str[i] >= 13))
		return (0);
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && str[i] != ':')
		i++;
	if (str[i] != ':')
		return (0);
	i++;
	while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '\0')
		return (0);
	return (ft_is_printable(str));
}
