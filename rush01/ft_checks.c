/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:30:54 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 20:32:20 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_check_double(int **mtx, int pos, int num, int size)
{
	int i;

	i = 0;
	while (i < pos / (size / 4))
	{
		if (mtx[i][pos % (size / 4)] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < pos % (size / 4))
	{
		if (mtx[pos / (size / 4)][i] == num)
			return (0);
		i++;
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
	i_check = size / 4;
	if (pos / (size / 4) == (size / 4 -1))
	{
		while(i >= 0)
		{
			if(mtx[i][pos % (size / 4)] > max)
			{
				max = mtx[i][pos % (size / 4)];
				count++;
			}
			i--;
		}
		if (check[i_check + pos % (size / 4)] != count)//checking if at the number of col_down info match with count
			return (0);
	}
	return (1);
}

int ft_check_row_right(int **mtx, int pos, int *check, int size)
{
	int i;
	int max_size;
	int visible_towers;
	int	i_check;

	i = size - 1;
	max_size = 0;
	i_check = (size / 4) * 3;
	visible_towers = 0;
	if (pos % (size / 4) == (size / 4) - 1)
	{
		while (i >= 0)
		{
			if (mtx[pos / (size / 4)][i] > max_size)
			{
				max_size = mtx[pos / (size / 4)][i];
				visible_towers++;
			}
			i--;
		}
		if (check[i_check + pos / (size / 4)] != visible_towers)
			return (0);
	}
	return (1);
}

int ft_check_row_left(int **mtx, int pos, int *check, int size)
{
	int i;
	int max_size;
	int visible_towers;
	int	i_check;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	i_check = (size / 4) * 2;
	if (pos % (size / 4) == (size / 4 - 1))
	{
		while (i < (size / 4))
		{
			if (mtx[pos / (size / 4)][i] > max_size)
			{
				max_size = mtx[pos / (size / 4)][i];
				visible_towers++;
			}
			i++;
		}
		if (check[i_check + pos / (size / 4)] != visible_towers)
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
	if(pos / (size / 4) == (size / 4) -1)
	{
		while(i >= 0)
		{
			if(mtx[i][pos % (size / 4)] > max)
			{
				max = mtx[i][pos % (size / 4)];
				count++;
			}
			i++;
		}
		if (check[pos % (size / 4)] != count)
			return (0);
	}
	return (1);
}
