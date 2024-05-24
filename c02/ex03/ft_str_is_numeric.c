/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:38:37 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:40:12 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			break ;
	}
	if (!*str)
		ret = 1;
	return (ret);
}
/*
int	main()
{
	char	*s0 = "jkbdfjkb";
	char    *s1 = "+4324";
	char    *s2 = "-1";
	char    *s3 = "5356390397503";
	char	*s4 = "";

	printf("%d\n", ft_str_is_numeric(s0));
	printf("%d\n", ft_str_is_numeric(s1));
	printf("%d\n", ft_str_is_numeric(s2));
	printf("%d\n", ft_str_is_numeric(s3));
	printf("%d\n", ft_str_is_numeric(s4));
}*/
