/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:07:12 by francema          #+#    #+#             */
/*   Updated: 2024/05/15 14:26:59 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int n)
{
	int		units;
	int		dec;
	char	d;
	char	u;

	if (n < 10)
	{
		d = '0';
		u = n + 48;
		write(1, &d, 1);
		write(1, &u, 1);
	}
	else
	{
		dec = n / 10;
		units = n % 10;
		d = dec + 48;
		u = units + 48;
		write(1, &d, 1);
		write(1, &u, 1);
	}
}

void	ft_print_comb2(void)
{
	int	sx;
	int	dx;

	sx = 0;
	while (sx <= 99)
	{
		dx = sx + 1;
		while (dx <= 99)
		{
			ft_print_num(sx);
			write(1, " ", 1);
			ft_print_num(dx);
			if (sx < 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			dx++;
		}
		sx++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
