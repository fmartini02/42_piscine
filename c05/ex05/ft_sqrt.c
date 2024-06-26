/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:04:50 by francema          #+#    #+#             */
/*   Updated: 2024/05/29 15:24:20 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt_rec(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_rec(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_rec(nb, 0));
}
/*
int	main()
{
	printf("%d\n", ft_sqrt());
}*/
