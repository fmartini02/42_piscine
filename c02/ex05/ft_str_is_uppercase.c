/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:12:04 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:42:46 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char	*s0 = "ADVDSVWQWWQTUIBV";
	char    *s1 = "VGSSSD  VFDVFG";
	char    *s2 = "VDFGRGERG ";
	char    *s3 = " DDHSHSHHASWTYI";
	char    *s4 = "FSFFDGR4342";
	char    *s5 = "DFSWEWECSDdsdgg";
	char    *s6 = "fefe";
	char    *s7 = "";
	printf("%d\n", ft_str_is_uppercase(s0));
	printf("%d\n", ft_str_is_uppercase(s1));
	printf("%d\n", ft_str_is_uppercase(s2));
	printf("%d\n", ft_str_is_uppercase(s3));
	printf("%d\n", ft_str_is_uppercase(s4));
	printf("%d\n", ft_str_is_uppercase(s5));
	printf("%d\n", ft_str_is_uppercase(s6));
	printf("%d\n", ft_str_is_uppercase(s7));
}*/
