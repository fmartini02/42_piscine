/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_arr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:56:03 by francema          #+#    #+#             */
/*   Updated: 2024/06/03 15:56:48 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = (int *) 0;
		return (0);
	}
	i = 0;
	arr = malloc (sizeof(int) * (max - min));
	if (!arr)
	{
		*range = (int *) 0;
		printf("Memory allocation failed.\n");
		return (-1);
	}
	while(min < max)
		arr[i++] = min++;
	*range = arr;
	return(i);
}
/*int main(int ac , char **av)
{
	(void)ac;
	int *range = NULL;
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	int size = ft_ultimate_range(&range, min, max);
	if (size == -1 || !range)
	{
		printf("ERROR\n");
		return 1;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");
	free(range);
	return 0;
}*/
