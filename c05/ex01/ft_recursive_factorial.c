/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:39:34 by francema          #+#    #+#             */
/*   Updated: 2024/05/23 16:58:46 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		result = 0;
	else if (nb == 0 || nb == 1)
		return (result);
	return (nb * ft_recursive_factorial(nb -1));
}

int	main()
{
	printf("%d\n", ft_recursive_factorial(12));
}
