/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:41:15 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 15:25:28 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (str[r])
		r++;
	return (r);
}

void	ft_putbnbr_base(int nbr, char *base)
{
	int	b;

	b = ft_strlen(base);
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if (nbr >= b)
	{
		ft_putnbr_base(nbr / b);
		ft_putnbr_base(nbr % b);
	}
	write(1, base[nbr], 1);
}
