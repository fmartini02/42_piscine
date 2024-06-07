/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:55:34 by francema          #+#    #+#             */
/*   Updated: 2024/06/04 10:59:59 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*int		ft_check_base(char *base)
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

char	ft_base_from_2_base_ten(char *nbr, char *b_f, char *b_t)
{
	int		n;
	int		i;
	int		len;
	char	*res;

	while(nbr[i] && (nbr[i] == '-' || nbr[i] == '+'))
		i++;
	while(nbr[i] && ft_strchr(b_f, nbr[i]))
	{
		n += ft_char_index(nbr[i], b_f) * ft_power(ft_strlen(b_f), ft_nbr_len(nbr) - 1);
		i++;
	}
	if(n < 10)
	{
		res = malloc(sizeof(char) * 2);
		res[0] = b_t[n];
		res[1] = '\0';
	}
	else
	{
		len = ft_nbr_len(nbr, b_t);
		res = malloc(sizeof(char) * (len + 1));
		res[len] = '\0';
		while(n >= 10)
		{
			res[len -1] = b_t[n % 10];
			n /= 10;
			len--;
		}
		res[len - 1] = b_t[n];
	}
	return (res);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	char	*base_ten;

	base_ten = "0123456789";
	if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
		return ((char *) 0);
	if (ft_check_base(base_from) || ft_check_base(base_to))
		return ((char *) 0);
	if (ft_nbr_len(nbr, base_from) == 0)
		return ((char *) 0);
	res = ft_base_from_2_base_ten(nbr, base_from, base_ten);
	if (!res)
		return ((char *) 0);
	res = ft_base_ten_2_base_to(res, base_to);
}*/
