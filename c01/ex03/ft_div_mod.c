/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:43:36 by francema          #+#    #+#             */
/*   Updated: 2024/05/16 15:52:36 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	twelv;
	int	ten;
	int	div;
	int	mod;

	ten = 10;
	twelv = 12;
	div = 0;
	mod = 0;
	ft_div_mod(twelv, ten, &div, &mod);
	printf("division is %d\n module is %d\n", div,mod);
}
*/
