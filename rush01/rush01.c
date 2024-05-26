/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 22:39:18 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_error();
void	ft_print_mat(int **mtx, int size);
int	ft_check_double(int **mtx, int pos, int num, int size);
int	ft_count_words(char *s);
int	ft_check_case(int **mtx, int col, int *check);
int	ft_check_inputs(char *s);
void	ft_mtx_init(int **mtx, int size);
int	*ft_set_check(char *s, int size);
int	ft_count_words(char *s);

int	g_size = 0;

int	ft_solve_puzzle(int **mtx, int *check, int row, int col)
{
	int	num;
	int	next_row;
	int	next_col;

	if (row == g_size)
		return (ft_check_case(mtx, col, check));
	next_row = row;
	if (col == g_size - 1)
		next_row = row + 1;
	next_col = col + 1;
	if (col == g_size - 1)
		next_col = 0;
	num = 0;
	while(num < (g_size))
	{
		num++;
		if(ft_check_double(mtx, col, row, num))
		{
			if(ft_check_case(mtx, col, check))//checking if it's a right value
			{
				mtx[row][col] = num;//setting to pos value indx
				if(ft_solve_puzzle(mtx, check, next_row, next_col))
					return(1);
				mtx[row][col] = 0;
			}
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	**mtx;
	int	*check;

	i = 0;
	if(ac == 1)
		ft_error();
	g_size = ft_count_words(av[1]) + 1 / 4;
	check = ft_set_check(av[1], g_size);
	if (ac == 2)
	{
		if (!ft_check_inputs(av[1]))
			return (1);
		mtx = malloc(sizeof(int*) * (g_size));
		if (!mtx)
			ft_error();
		while (i < (g_size))
		{
			mtx[i] = malloc(sizeof(int) * (g_size));
			if (!mtx[i])
				ft_error();
			i++;
		}
		ft_mtx_init(mtx, g_size);
		ft_solve_puzzle(mtx, check, 0, 0);
		ft_print_mat(mtx, g_size);
	}
}
