/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:04:50 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 16:29:47 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt_rec(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if(i * i == nb)
		return (i);
	if(i * i < nb)
		return(ft_sqrt_rec(nb, i));
	return (0);
}
int	ft_sqrt_rec(int nb)
{
	return(ft_sqrt_rec(nb, 0));
}
