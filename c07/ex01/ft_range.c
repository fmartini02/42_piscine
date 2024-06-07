/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:53:00 by francema          #+#    #+#             */
/*   Updated: 2024/06/06 15:42:21 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	tmp;
	int	i;
	int	len;
	int	*range;
	int	*og;

	if (min >= max)
		return (NULL);
	tmp = min;
	len = 0;
	while (tmp < max)
	{
		len++;
		tmp++;
	}
	range = malloc(sizeof(int) * len);
	i = 0;
	tmp = min;
	og = range;
	while (i < len)
		range[i++] = tmp++;
	return (range);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	int	*arr = ft_range(atoi(av[1]), atoi(av[2]));
	int	i = 0;
	while(arr[i])
	{
		printf("%d\n",arr[i]);
		i++;
	}
}*/
