/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:59:45 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 16:02:57 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		return(result + 1);
	else if (nb == 0)
		return (result);
	else if (power < 0)
		return (result);
	else if (nb < 0 && power % 2 == 0)
		nb *= -1;
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main()
{
	printf("%d\n", ft_iterative_power(-3,-9));
}*/
/*float	ft_neg_power(int nb, int power)
{
	int		sign;
	float	result;

	sign = 1;
	result = 0;
	if (nb < 0 && power % 2 == 0 && power < 0)//-2^-2 => 0,25 1/4
	{
		nb *= -1;
		power *= -1;
	}
	else if (nb < 0 && power < 0 && power % 2 != 0)//-2^-3 => -0,125 1/8
		sign = -1;
	while(power > 1)
	{
		result = nb * nb;
		power--;
	}
	return(1 / result);
}
*/
