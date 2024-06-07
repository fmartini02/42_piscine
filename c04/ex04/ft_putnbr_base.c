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

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	r = 0;
	if (!base[i] || ft_strlen(base) < 2)
		return (1);
	while (base[i] && !r)
	{
		if ((base[i] == '-' || base[i] == '+' )
			|| ((base[i] >= 1 && base[i] <= 32) || base[i] == 127))
			r = 1;
		j = i + 1;
		while (base[j] && !r)
		{
			if (base[i] == base[j])
				r = 1;
			j++;
		}
		i++;
	}
	return (r);
}

void	ft_putnbr_long(long nbr, char *base)
{
	long	b;
	long	n;

	b = ft_strlen(base);
	n = nbr;
	if (ft_check_base(base))
		return ;
	if (n == -2147483648)
	{
		write(1, "-", 1);
		n *= -1;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= b)
	{
		ft_putnbr_long(n / b, base);
		ft_putnbr_long(n % b, base);
	}
	else
		write(1, &base[n], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_long((long)nbr, base);
}
/*
int	main()
{
	int	n = 2147483647;
	char	*base = "0123456789";
	ft_putnbr_base(n, base);
	write(1,"\n",1);
	return (0);
}*/
