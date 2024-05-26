/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 23:17:20 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_error(void);
void	ft_print_mat(int **mtx);
int		ft_check_double(int **mtx, int row, int col, int num);
int		ft_count_words(char *s);
int		ft_check_case(int **mtx, int *check);
int		ft_check_inputs(char *s);
void	ft_mtx_init(int **mtx);
int		*ft_set_check(char *s);
int		ft_count_words(char *s);

int	g_size = 0;

int	solve(int **mtx, int *check, int row, int col)
{
	int	next_row;
	int	next_col;
	int	num;

	if (row == g_size)
		return (is_valid(mtx, check));
	next_row = row;
	if (col == g_size - 1)
		next_row = row + 1;
	next_col = col + 1;
	if (col == g_size - 1)
		next_col = 0;
	num = 1;
	while (num <= g_size)
	{
		if (is_safe(mtx, row, col, num))
		{
			mtx[row][col] = num;
			if (solve(mtx, check, next_row, next_col))
				return (1);
			mtx[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	**ft_male(void)
{
	int	i;
	int	**mtx;

	i = 0;
	mtx = malloc (sizeof(int *) * (g_size));
	if (!mtx)
		ft_error();
	while (i < (g_size))
	{
		mtx[i] = malloc(sizeof(int) * (g_size));
		if (!mtx[i])
			ft_error();
		i++;
	}
	return (mtx);
}

int	main(int ac, char **av)
{
	int	**mtx;
	int	*check;

	if (ac == 1)
		ft_error();
	g_size = ft_count_words(av[1]) + 1 / 4;
	check = ft_set_check(av[1]);
	if (ac == 2)
	{
		if (!ft_check_inputs(av[1]))
			return (1);
		mtx = ft_male();
		ft_mtx_init(mtx);
		ft_solve_puzzle(mtx, check, 0, 0);
		ft_print_mat(mtx);
	}
}
