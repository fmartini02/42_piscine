/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:46:23 by francema          #+#    #+#             */
/*   Updated: 2024/05/29 15:23:11 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	else if (power < 0)
		return (0);
	else if (nb < 0 && power % 2 == 0)
		nb *= -1;
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main()
{
	printf("%d\n", ft_recursive_power(-6,4));
}*/
