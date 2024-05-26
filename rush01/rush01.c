/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:02:58 by francema          #+#    #+#             */
/*   Updated: 2024/05/26 11:53:21 by francema         ###   ########.fr       */
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

void	ft_mtx_inf_init(char **mtx_inf, char *s, int size)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	y = 0;
	while(s[y])
	{
		while (s[y] && (s[y] == ' ' || (s[y] >= '\t' && s[y] <= '\r')))
			y++;
		if(s[y] && (s[y] >= '0' && s[y] <= '9'))
			mtx_inf[i][j++] = s[y++];
		if(j > size -1)
		{
			i++;
			mtx_inf[i][j] = '\0';
			j = 0;
		}
	}
	mtx_inf[i] = NULL;
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

int	ft_check_output(char **mtx, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	t = 0;
	j = 1;
	while (i < size -1)
	{
		while(j < size -2)
		{
			while(mtx[i][j])
			{
				if(mtx[i][j] == mtx[i][t])
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
	while (mtx[i][j])
	{
		while(i < size -2)
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

void	ft_mtx_res(char **mtx_inf, char **mtx_res, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_init_res(mtx_res, size);

}

int	main(int ac, char **av)
{
	int		size;
	int		i;
	char	**mtx_res;
	char	**mtx_inf;

	size = 0;
	i = 0;
	if(ac == 1)
		write(1, "Error\n", 6);
	else
	{
		if (!ft_check_inputs)
			return (1);
		mtx_inf = malloc (sizeof(char *) * size + 1);
		mtx_res = malloc (sizeof(char *) * size + 1);
		if (!mtx_inf || !mtx_res)
		{
			write(1, "Malloc error\n", 13);
			return (1);
		}
		ft_mtx_info_init(mtx_inf, av[1], size);
		ft_mtx_res(mtx_inf, mtx_res, size);
	}
}
