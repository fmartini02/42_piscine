/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:57:47 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 19:01:26 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (str[i])
		i++;
	return (r);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	n;
	int	b;

	i = 0;
	sign = 1;
	n = 0;
	b = ft_strlen(base);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		else
			sign *= +1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * b) + (str[i] - '0');
		i++;
	}
	return(n * sign);
}
