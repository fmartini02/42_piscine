/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:56:41 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:40:46 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
	char	*s0 = "djvui mc skjchdsvbdjhd";
	char    *s1 = "affVYBY";
	char    *s2 = "Avdvd";
	char    *s3 = "	bfdbnfd ";
	char    *s4 = "fvdfbvvd	 ";
	char    *s5 = "sadv96{/";
	char	*s6 = "bvhbvh";
	printf("%d\n", ft_str_is_lowercase(s0));
	printf("%d\n", ft_str_is_lowercase(s1));
	printf("%d\n", ft_str_is_lowercase(s2));
	printf("%d\n", ft_str_is_lowercase(s3));
	printf("%d\n", ft_str_is_lowercase(s4));
	printf("%d\n", ft_str_is_lowercase(s5));
	printf("%d\n", ft_str_is_lowercase(s6));
}*/
