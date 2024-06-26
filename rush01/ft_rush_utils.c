/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:32:22 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 23:07:06 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
int		ft_check_col_down(int **mtx, int i, int *check);
int		ft_check_row_right(int **mtx, int *check);
int		ft_check_row_left(int **mtx, int *check);
int		ft_check_col_up(int **mtx, int i, int *check);
void	ft_error(void);
extern int	g_size;

int	ft_count_words(char *s)
{
	int	i;
	int	n_w;

	i = 0;
	n_w = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r')))
			i++;
		while (s[i] && !(s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r')))
			i++;
		if (s[i])
			n_w++;
	}
	return (n_w);
}

int	ft_check_inputs(char *s)
{
	int	i;
	int	g_size;

	i = 0;
	g_size = ft_count_words(s) + 1;
	if (g_size % 4 != 0)
	{
		write(1, "inputs Error\n", 13);
		return (0);
	}
	while (s[i])
	{
		if (s[i] == 32 || (s[i] >= '1' && s[i] <= '9'))
			i++;
		else
		{
			write(1, "inputs Error\n", 13);
			return (0);
		}
	}
	return (1);
}

int	*ft_set_check(char *s)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int) * (g_size + 1));
	if (!tab)
		ft_error();
	while (s[i])
	{
		if (s[i] >= '1' && s[i] <= '9')
		{
			tab[j++] = ft_atoi(&s[i]);
		}
		i++;
	}
	return (tab);
}

void	ft_mtx_init(int **mtx)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (g_size))
	{
		while (j < (g_size))
		{
			mtx[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
}

int	ft_check_case(int **mtx, int *check)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if (!ft_check_row_left(&mtx[i], &check[(g_size * 2) + i]))
			return (0);
		if (!ft_check_row_right(&mtx[i], &check[(g_size * 3) + i]))
			return (0);
		if (!ft_check_col_down(mtx, i, &check[i]))
			return (0);
		if (!ft_check_col_up(mtx, i, &check[i]))
			return (0);
		i++;
	}
	return (1);
}
