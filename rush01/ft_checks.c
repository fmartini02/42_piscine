/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:54 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 22:32:35 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_size;

int	ft_check_double(int **mtx, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if(mtx[row][i] == num || mtx[i][col])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_col_down(int **mtx, int pos, int *check)
{
	int	i;
	int	max;
	int	count;
	int	i_check;

	i = g_size -1;
	max = 0;
	count = 0;
	i_check = g_size;
	if (pos / (g_size) == (g_size -1))
	{
		while (i >= 0)
		{
			if (mtx[i][pos % (g_size)] > max)
			{
				max = mtx[i][pos % (g_size)];
				count++;
			}
			i--;
		}
		if (check[i_check + pos % (g_size)] != count)
			return (0);
	}
	return (1);
}

int	ft_check_row_right(int **mtx, int pos, int *check)
{
	int	i;
	int	max_size;
	int	visible_towers;
	int	i_check;

	i = g_size - 1;
	max_size = 0;
	i_check = (g_size) * 3;
	visible_towers = 0;
	if (pos % (g_size) == (g_size) - 1)
	{
		while (i >= 0)
		{
			if (mtx[pos / (g_size)][i] > max_size)
			{
				max_size = mtx[pos / (g_size)][i];
				visible_towers++;
			}
			i--;
		}
		if (check[i_check + pos / (g_size)] != visible_towers)
			return (0);
	}
	return (1);
}

int	ft_check_row_left(int **mtx, int pos, int *check)
{
	int	i;
	int	max_size;
	int	visible_towers;
	int	i_check;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	i_check = (g_size) * 2;
	if (pos % (g_size) == (g_size - 1))
	{
		while (i < (g_size))
		{
			if (mtx[pos / (g_size)][i] > max_size)
			{
				max_size = mtx[pos / (g_size)][i];
				visible_towers++;
			}
			i++;
		}
		if (check[i_check + pos / (g_size)] != visible_towers)
			return (0);
	}
	return (1);
}

int	ft_check_col_up(int **mtx, int pos, int *check)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / (g_size) == (g_size) - 1)
	{
		while (i >= 0)
		{
			if (mtx[i][pos % (g_size)] > max)
			{
				max = mtx[i][pos % (g_size)];
				count++;
			}
			i++;
		}
		if (check[pos % (g_size)] != count)
			return (0);
	}
	return (1);
}
