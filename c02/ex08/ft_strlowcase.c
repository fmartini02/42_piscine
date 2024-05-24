/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:53:54 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:45:48 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	*s0 = "BFBGNGNXCGBFBDFBF 		84565498  ";
	char	*s1 = "  AAD 32#@%^21$ XBNS  )*(\\*`~";
	char    *s2 = "";
	char    *s3 = "\t\n\v";
	char    *s4 = "ciao";
	char    *s5 = "               ";
	printf("%s\n", ft_strlowcase(s0));
	printf("%s\n", ft_strlowcase(s1));
	printf("%s\n", ft_strlowcase(s2));
	printf("sgorbi incoming\n");
	printf("%s\n", ft_strlowcase(s3));
	printf("sgorbi ended\n");
	printf("%s\n", ft_strlowcase(s4));
	printf("%s\n", ft_strlowcase(s5));
}*/
