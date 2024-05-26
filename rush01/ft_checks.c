/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:54 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 22:16:18 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_size;

int	ft_check_double(int **mtx, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if(mtx[])
	}
	return (1);
}

int	ft_check_col_down(int **mtx, int pos, int *check, int size)
{
	int	i;
	int	max;
	int	count;
	int	i_check;

	i = size -1;
	max = 0;
	count = 0;
	i_check = size;
	if (pos / (size) == (size -1))
	{
		while (i >= 0)
		{
			if (mtx[i][pos % (size)] > max)
			{
				max = mtx[i][pos % (size)];
				count++;
			}
			i--;
		}
		if (check[i_check + pos % (size)] != count)
			return (0);
	}
	return (1);
}

int	ft_check_row_right(int **mtx, int pos, int *check, int size)
{
	int	i;
	int	max_size;
	int	visible_towers;
	int	i_check;

	i = size - 1;
	max_size = 0;
	i_check = (size) * 3;
	visible_towers = 0;
	if (pos % (size) == (size) - 1)
	{
		while (i >= 0)
		{
			if (mtx[pos / (size)][i] > max_size)
			{
				max_size = mtx[pos / (size)][i];
				visible_towers++;
			}
			i--;
		}
		if (check[i_check + pos / (size)] != visible_towers)
			return (0);
	}
	return (1);
}

int	ft_check_row_left(int **mtx, int pos, int *check, int size)
{
	int	i;
	int	max_size;
	int	visible_towers;
	int	i_check;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	i_check = (size) * 2;
	if (pos % (size) == (size - 1))
	{
		while (i < (size))
		{
			if (mtx[pos / (size)][i] > max_size)
			{
				max_size = mtx[pos / (size)][i];
				visible_towers++;
			}
			i++;
		}
		if (check[i_check + pos / (size)] != visible_towers)
			return (0);
	}
	return (1);
}

int	ft_check_col_up(int **mtx, int pos, int *check, int size)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / (size) == (size) - 1)
	{
		while (i >= 0)
		{
			if (mtx[i][pos % (size)] > max)
			{
				max = mtx[i][pos % (size)];
				count++;
			}
			i++;
		}
		if (check[pos % (size)] != count)
			return (0);
	}
	return (1);
}
