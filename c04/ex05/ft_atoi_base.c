/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:50:55 by francema          #+#    #+#             */
/*   Updated: 2024/05/23 16:01:56 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_in_base(char c, char *base)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while(base[i])
	{
		if (base[i] == c)
			r = 1;
		i++;
	}
	return (r);
}

int	ft_set_indx_and_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	*i = 0;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int		ft_check_base(char *base)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	r = 0;
	while (base[i] && !r)
	{
		if ((base[i] == '-' || base[i] == '+' )|| ((base[i] >= 1
			&& base[i] <= 32) || base[i] == 127))
			r = 2;
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				r = 1;
			j++;
		}
		i++;
	}
	return (r);
}

int	ft_add_int_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	base_len;
	int	sign;

	res = 0;
	i = 0;
	if (ft_check_base(base))
		return (1);
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (2);
	sign = ft_set_indx_and_sign(str, &i);
	while (ft_is_in_base(str[i], base))
	{
		res *= base_len;
		res += ft_add_int_base(str[i], base);
		i++;
	}
	return (res * sign);
}
/*
int main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	printf("%d\n", ft_atoi_base(av[1], av[2]));
	return (0);
}*/
