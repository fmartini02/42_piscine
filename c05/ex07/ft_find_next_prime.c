/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:38:40 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 16:55:02 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb > 2147395600 || nb <= 1)
		return (0);
	while (nb % div != 0)
		div++;
	if (div == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	test;

	test = nb;
	if (test <= 2)
		return(2);
	while (!ft_is_prime(test))
		test++;
	return (test);
}
