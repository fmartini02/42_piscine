/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:54 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 23:09:40 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_size;

int	ft_check_double(int **mtx, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if (mtx[row][i] == num || mtx[i][col])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_row_left(int *row, int clue)
{
	int	max_seen;
	int	seen_count;
	int	i;

	max_seen = 0;
	seen_count = 0;
	i = 0;
	while (i < g_size)
	{
		if (row[i] > max_seen)
		{
			max_seen = row[i];
			seen_count++;
		}
		i++;
	}
	return (seen_count == clue);
}

int	ft_check_row_right(int *row, int clue)
{
	int	max_seen;
	int	seen_count;
	int	i;

	max_seen = 0;
	seen_count = 0;
	i = g_size - 1;
	while (i >= 0)
	{
		if (row[i] > max_seen)
		{
			max_seen = row[i];
			seen_count++;
		}
		i--;
	}
	return (seen_count == clue);
}

int	ft_check_col_up(int **matrix, int col, int clue)
{
	int	max_seen;
	int	seen_count;
	int	i;

	max_seen = 0;
	seen_count = 0;
	i = 0;
	while (i < g_size)
	{
		if (matrix[i][col] > max_seen)
		{
			max_seen = matrix[i][col];
			seen_count++;
		}
		i++;
	}
	return (seen_count == clue);
}

int	ft_check_col_down(int **matrix, int col, int clue)
{
	int	max_seen;
	int	seen_count;
	int	i;

	max_seen = 0;
	seen_count = 0;
	i = g_size - 1;
	while (i >= 0)
	{
		if (matrix[i][col] > max_seen)
		{
			max_seen = matrix[i][col];
			seen_count++;
		}
		i--;
	}
	return (seen_count == clue);
}
