/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 20:33:48 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_solve_puzzle(int **mtx, int *check, int size, int pos)
{
	int	indx;

	if(pos >= size * size)
		return (1);
	indx = 0;
	while(indx < size)
	{
		indx++;
		if(ft_check_double(mtx, pos, indx, size))
		{
			mtx[pos / size][pos % size] = indx;//setting to pos value indx
			if(ft_check_case(mtx, pos, check, size))//checking if it's a right value
			{
				if(ft_solve_puzzle(mtx, check, size, pos +1) == 1)
					return(1);
			}
			else
				mtx[pos / size][pos % size] = 0;
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
		mtx = malloc(sizeof(int*) * size);
		if (!mtx)
			ft_error();
		while (i < size)
		{
			mtx[i] = malloc(sizeof(int) * size +1);
			if (!mtx[i])
				ft_error();
			i++;
		}
		ft_mtx_init(mtx, size);
		ft_solve_puzzle(mtx, check, size, 0);
		ft_print_mat(mtx);
	}
}
