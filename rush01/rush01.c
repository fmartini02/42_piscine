/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 22:17:32 by francema         ###   ########.fr       */
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
int	ft_check_case(int **mtx, int pos, int *check, int size);
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
		return (ft_check_case());
	next_row = row;
	if (col == g_size - 1)
		next_row = row + 1;
	next_col = col + 1;
	if (col == g_size - 1)
		next_col = 0;
	num = 0;
	while(num < (g_size / 4))
	{
		num++;
		if(ft_check_double(mtx, col, row, num))
		{
			mtx[row][col] = num;//setting to pos value indx
			if(ft_check_case(mtx, col, check))//checking if it's a right value
			{
				if(ft_solve_puzzle(mtx, check, next_row, next_col) == 1)
					return(1);
			}
			else
				mtx[row][col] = 0;
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	size;
	int	i;
	int	**mtx;
	int	*check;

	i = 0;
	if(ac == 1)
		ft_error();
	size = ft_count_words(av[1]) + 1;
	check = ft_set_check(av[1], size);
	if (ac == 2)
	{
		if (!ft_check_inputs(av[1]))
			return (1);
		mtx = malloc(sizeof(int*) * (size / 4));
		if (!mtx)
			ft_error();
		while (i < (size / 4))
		{
			mtx[i] = malloc(sizeof(int) * (size / 4));
			if (!mtx[i])
				ft_error();
			i++;
		}
		ft_mtx_init(mtx, size);
		ft_solve_puzzle(mtx, check, 0, 0);
		ft_print_mat(mtx, size);
	}
}
