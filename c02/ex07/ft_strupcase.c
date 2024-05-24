/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:37:47 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:45:24 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	*s0 = "cdsddvu  cbdub 		84565498  ";
	char	*s1 = "  AAD 32#@%^21$ fdbffffd  )*(\\*`~";
	char    *s2 = "";
	char    *s3 = "\t\n\v";
	char    *s4 = "ciao";
	char    *s5 = "               ";
	printf("%s\n", ft_strupcase(s0));
	printf("%s\n", ft_strupcase(s1));
	printf("%s\n", ft_strupcase(s2));
	printf("sgorbi incoming\n");
	printf("%s\n", ft_strupcase(s3));
	printf("sgorbi ended\n");
	printf("%s\n", ft_strupcase(s4));
	printf("%s\n", ft_strupcase(s5));
}*/
