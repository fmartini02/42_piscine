/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:54:18 by francema          #+#    #+#             */
/*   Updated: 2024/06/06 15:42:10 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	tmp;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tmp = min;
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	tmp = min;
	while (i < len)
		tab[i++] = tmp++;
	*range = tab;
	return (len);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	int	*arr;
	int	l; 
	l = ft_ultimate_range(&arr, atoi(av[1]), atoi(av[2]));
	int	i = 0;
	while(arr[i])
	{
		printf("%d\n",arr[i]);
		i++;
	}
}*/
