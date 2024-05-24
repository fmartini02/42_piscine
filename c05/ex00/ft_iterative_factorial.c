/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:08:31 by francema          #+#    #+#             */
/*   Updated: 2024/05/23 16:49:40 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		result = 0;
	if (nb == 0 || nb == 1)
		return (result);
	while(nb > 1)
	{
		result *=  nb * (nb -1);
		nb -= 2;
	}
	return (result);
}
/*
int main()
{
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}*/
