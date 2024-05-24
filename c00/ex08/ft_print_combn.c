/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:00:20 by francema          #+#    #+#             */
/*   Updated: 2024/05/15 16:42:34 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_print_zeros(int nu, int ciph)
{
	int		n_zero;
	int		tmp;
	int		i;

	n_zero = 0;
	tmp = nu;
	i = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		i++;
	}
	n_zero = ciph - i;
	while (n_zero > 0)
	{
		write(1, "0", 1);
		n_zero--;
	}
}

void	ft_putflag(int flag)
{
	char	*str;
	int		i;

	str = "0987654321";
	i = 1;
	while (i <= flag)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	cipher;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		cipher = nb + 48;
		write(1, &cipher, 1);
	}
}

void	ft_print_combn(int n)
{
	int	num;
	int	controll;
	int	flag;

	num = 1;
	flag = 0;
	controll = 9;
	if (n > 10 || n <= 0)
		return ;
	while (flag <= n)
	{
		ft_print_zeros(num, n);
		ft_putnbr(num);
		num++;
		if (flag)
			ft_putflag(flag);
		if (num >= controll)
		{
			flag += 1;
			controll--;
			num = 1;
		}
		if (flag <= n)
			write(1, ", ", 2);
	}
}
/*
int	main ()
{
	ft_print_combn(2);
}*/
