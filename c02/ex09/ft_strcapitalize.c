/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:59:23 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:48:27 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_is_up(char str)
{
	int	ret;

	ret = 0;
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (ret);
}

int	ft_is_low(char str)
{
	int	ret;

	ret = 0;
	if (str >= 'a' && str <= 'z')
		return (1);
	return (ret);
}

int	ft_is_num(char str)
{
	int	ret;

	ret = 0;
	if (str >= '0' && str <= '9')
		return (1);
	return (ret);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		while (ft_is_num(str[i]) || ft_is_low(str[i]) || ft_is_up(str[i]))
			i++;
		while (str[i] && !ft_is_num(str[i])
			&& !ft_is_low(str[i]) && !ft_is_up(str[i]))
			i++;
	}
	return (str);
}
/*
int main() {
    char *s0 = strdup("c'i,a,o");
    char *s1 = strdup("salut, comment tu vas ? 
    	42mots quarante-deux; cinquante+et+un");
    char *s2 = strdup(" c i a o ");
    char *s3 = strdup(" Ci ao");
    char *s4 = strdup(" (i 4o");
    char *s5 = strdup("[[[[]]]] 034 @#$$@! $@ & d D");
    char *s6 = strdup("");
    char *s7 = strdup("        ");

    printf("%s\n", ft_strcapitalize(s0));
    printf("%s\n", ft_strcapitalize(s1));
    printf("%s\n", ft_strcapitalize(s2));
    printf("%s\n", ft_strcapitalize(s3));
    printf("%s\n", ft_strcapitalize(s4));
    printf("%s\n", ft_strcapitalize(s5));
    printf("%s\n", ft_strcapitalize(s6));
    printf("%s\n", ft_strcapitalize(s7));

    // Freeing the allocated memory
    free(s0);
    free(s1);
    free(s2);
    free(s3);
    free(s4);
    free(s5);
    free(s6);
    free(s7);

    return 0;
}*/
