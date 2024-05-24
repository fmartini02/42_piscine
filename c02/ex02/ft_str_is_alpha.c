/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:23:17 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:39:29 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else if (*str >= 97 && *str <= 122)
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
	char	*s0 = "ndjsvbbjdv";
	char	*s1 = "AVFBFBT";
	char	*s2 = "cdhcd/';.][][\\-+@";
	char	*s3 = "@%$#*!";
	char	*s4 = "";

	printf("%d\n", ft_str_is_alpha(s0));
	printf("%d\n", ft_str_is_alpha(s1));
	printf("%d\n", ft_str_is_alpha(s2));
	printf("%d\n", ft_str_is_alpha(s3));
	printf("%d\n", ft_str_is_alpha(s4));
}
*/
