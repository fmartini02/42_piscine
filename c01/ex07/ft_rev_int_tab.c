/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:22:04 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:28:40 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int i, int j)
{
	int	tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		ft_swap(tab, i, j);
		i++;
		j--;
	}
}
/*
int	main()
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6};
	int	i = 0;
	ft_rev_int_tab(tab, 7);
	while(i < 7)
		printf("%d\n",tab[i++]);
	printf("\n");
	int	ttab[] = {0, 1, 2, 3, 4, 5, 6, 7};
	i = 0;
	ft_rev_int_tab(ttab, 8);
	while(i < 8)
		printf("%d\n",ttab[i++]);
}*/
