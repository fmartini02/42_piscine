/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:53:41 by francema          #+#    #+#             */
/*   Updated: 2024/05/16 16:00:42 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	mod = *a % *b;
	div = *a / *b;
	*a = div;
	*b = mod;
}
/*
int	main()
{
	int	div;
	int	mod;

	div = 30;
	mod = 5;
	ft_ultimate_div_mod(&div, &mod);
	printf("div is %d\nmod is %d\n", div, mod);
}*/
