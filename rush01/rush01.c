/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 17:51:06 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_count_words(char *s)
{
	int	i;
	int	n_w;

	i = 0;
	n_w = 0;
	while(s[i])
	{
		while(s[i] && s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
			i++;
		while(s[i] && !(s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r')))
			i++;
		if (s[i])
			n_w++;
	}
	return (n_w);
}

void	ft_mtx_init(int **mtx, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < size)
	{
		while(j < size)
		{
			mtx[i][j] = 0;
			j++;
		}
		mtx[i][j] = '\0';
		i++;
		j = 0;
	}
	mtx[i] = NULL;
}

int	ft_check_inputs(char *s)
{
	int	i;
	int	size;

	i = 0;
	size = ft_count_words(s);
	if (size % 4 != 0)
	{
		write(1, "inputs Error\n", 13);
		return (0);
	}
	while(s[i])
	{
		if(s[i] == 32 || (s[i] >= '1' && s[i] <= '9'))
			i++;
		else
		{
			write(1, "inputs Error\n", 13);
			return (0);
		}
	}
	return (1);
}

int	ft_check_double(char **mtx, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	t = 0;
	j = 1;
	while (i < size -1)//check rows
	{
		while(j < size -2)//check limits
		{
			while(mtx[i][j])//when rows exist
			{
				if(mtx[i][j] == mtx[i][t])//if there are doubles
					return (0);
				t++;
			}
			j++;
			t = j + 1;
		}
		i++;
		j = 0;
		t = j + 1;
	}
	i = 0;
	j = 0;
	t = 1;
	while (j < size -1)//checking all columns
	{
		while(i < size -2)//checking all first chars of colums
		{
			if (mtx[i][j] == mtx[t][j])
				return (0);
			i++;
			t = i + 1;
		}
		i = 0;
		t = i + 1;
		j++;
	}
	return (1);
}

void	ft_solve_puzzle(int **mtx, int *check, int size, int pos)
{
	int	indx;

	if(pos >= size * size)
		return (1);
	indx = 0;
	while(indx < size)
	{
		if(ft_check_double(mtx, size))
		{
			mtx[pos / size][pos % size] = indx;

		}
	}
}

int	*ft_set_check(char *s, int size)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 0;
	if(!(tab = malloc(sizeof(int) * (size * size))))
		ft_error();
	while(s[i])
	{
		if(s[i] >= '1' && s[i] <= '9')
		{
			tab[j++] = ft_atoi(s[i]);
		}
		i++;
	}
	return(tab);
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
	size = ft_count_words(av[1]);
	check = ft_set_check(av[1], size);
	if (ac == 2)
	{
		if (!ft_check_inputs(av[1]))
			return (1);
		mtx = malloc(sizeof(int*) * size + 1);
		if (!mtx)
			ft_error();
		while (i < size)
		{
			mtx[i] = malloc(sizeof(int) * size +1);
			if (!mtx[i])
				ft_error();
			i++;
		}
		ft_int_mtx(mtx, size);
		ft_solve_puzzle(mtx, size, check);
	}
}
