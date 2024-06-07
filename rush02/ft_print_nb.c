/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 16:32:58 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 23:04:34 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_pustr(char *s, unsigned long int *count)
{
	int	j;

	j = 0;
	if(*count > 0)
		write(1, " ", 1);
	while (s[j] != ':')
		j++;
	if (s[j] == ':')
		j++;
	while(s[j] == ' ' || (s[j] >= '\t' && s[j] <= '\r'))
		j++;
	while (s[j] != '\0')
		write(1, &s[j++], 1);
	(*count)++;
}

void	ft_print_dec(char **mtx, unsigned long int nb, unsigned long int *count)
{
	if(nb % 10 != 0 && nb < 21)
		ft_pustr(mtx[nb], count);
	else if(nb == 10)
		ft_pustr(mtx[10], count);
	else if(nb == 20)
		ft_pustr(mtx[20], count);
	else if(nb ==30)
		ft_pustr(mtx[21], count);
	else if (nb == 40)
		ft_pustr(mtx[22], count);
	else if (nb == 50)
		ft_pustr(mtx[23], count);
	else if (nb == 60)
		ft_pustr(mtx[24], count);
	else if (nb == 70)
		ft_pustr(mtx[25], count);
	else if (nb == 80)
		ft_pustr(mtx[26], count);
	else if (nb == 90)
		ft_pustr(mtx[27], count);
}

void	ft_print_hundred(char **mtx, unsigned long int nb, unsigned long int *count)
{
	ft_pustr(mtx[nb / 100], count);
	ft_pustr(mtx[28], count);
	if(nb % 100 != 0)
		ft_print_nb(mtx, nb % 100, count);
}
void ft_print_thousand(char **mtx, unsigned long int nb, unsigned long int *count)
{
	if(nb / 1000 >= 100)
		ft_print_hundred(mtx, nb / 1000, count);
	else if(nb / 1000 >= 10)
	{
		ft_print_dec(mtx, ((nb / 1000) / 10) * 10, count);
		ft_pustr(mtx[(nb / 1000) % 10], count);
	}
	else
		ft_pustr(mtx[nb / 1000], count);
	ft_pustr(mtx[29], count);
	if(nb % 1000 != 0)
		ft_print_nb(mtx, nb % 1000, count);
}

void ft_print_million(char **mtx, unsigned long int nb, unsigned long int *count)
{
	if (nb / 1000000 >= 100)
		ft_print_hundred(mtx, nb / 1000000, count);
	else if (nb / 1000000 >= 10)
	{
		ft_print_dec(mtx, ((nb / 1000000) / 10) * 10, count);
		ft_pustr(mtx[(nb / 1000000) % 10], count);
	}
	else
		ft_pustr(mtx [nb / 1000000], count);
	ft_pustr(mtx[30], count);
	if(nb % 1000000 != 0)
		ft_print_nb(mtx, nb % 1000000, count);
}

void ft_print_billion(char **mtx, unsigned long int nb, unsigned long int *count)
{
	if (nb / 1000000000 >= 100)
	{
		ft_print_hundred(mtx, nb / 1000000000, count);
		ft_print_dec(mtx, (((nb / 1000000000) % 100) *10), count);
	}
	else if (nb / 1000000000 >= 10)
	{
		ft_print_dec(mtx, ((nb / 1000000000) / 10) * 10, count);
		ft_pustr(mtx[(nb / 1000000000) % 10], count);
	}
	else
		ft_pustr(mtx [nb / 1000000000], count);
	ft_pustr(mtx[31], count);
	if (nb % 1000000000 != 0)
		ft_print_nb(mtx, nb % 1000000000, count);
}

void	ft_print_nb(char **mtx, unsigned long int nb, unsigned long int *count)
{

	if (nb == 0 && nb <= 20)
		ft_pustr(mtx[nb], count);
	else if (nb >= 21 && nb <= 99)
	{
		ft_print_dec(mtx, nb / 10 * 10, count);
		if(nb % 10 != 0)
			ft_print_nb(mtx, nb % 10, count);
	}
	else if (nb >= 100)
	{
		if (nb >= 100 && nb <= 999)
			ft_print_hundred(mtx, nb, count);
		else if (nb >= 1000 && nb <= 999999)
			ft_print_thousand(mtx, nb, count);
		else if (nb >= 1000000 && nb <= 999999999)
			ft_print_million(mtx, nb, count);
		else if (nb >= 1000000000 && nb <= 999999999999)
			ft_print_billion(mtx, nb, count);
		else
			ft_print_nb(mtx, nb / 1000000000, count);
	}
}
