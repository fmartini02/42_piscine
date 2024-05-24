/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:25:27 by francema          #+#    #+#             */
/*   Updated: 2024/05/15 19:21:33 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n1, int n2, int n3)
{
	char	c;

	c = n1 + 48;
	write(1, &c, 1);
	c = n2 + 48;
	write(1, &c, 1);
	c = n3 + 48;
	write(1, &c, 1);
	if (n1 < 7)
		write(1, ", ", 2);
}

void	ft_set_n3(int *n3, int *n2)
{
	(*n2)++;
	*n3 = *n2 + 1;
}

void	ft_set_n2(int *n3, int *n2, int *n1)
{
	(*n1)++;
	*n2 = *n1 + 1;
	*n3 = *n2 + 1;
}

void	ft_print_comb(void)
{
	int		n1;
	int		n2;
	int		n3;

	n1 = 0;
	n2 = 1;
	n3 = 2;
	while (n1 <= 7)
	{
		ft_print(n1, n2, n3);
		if (n3 < 9)
			n3++;
		else if (n3 == 9 && n2 < 8)
			ft_set_n3(&n3, &n2);
		else if (n3 == 9 && n2 == 8)
			ft_set_n2(&n3, &n2, &n1);
	}
}
/*
int	main()
{
	ft_print_comb();
}*/
