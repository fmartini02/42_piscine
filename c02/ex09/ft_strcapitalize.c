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

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (flag == 1 && is_alpha(str[i]))
		{
			str[i] = to_upper(str[i]);
			flag = 0;
		}
		else if (flag == 0 && is_alpha(str[i]))
			str[i] = to_lower(str[i]);
		else if (is_numeric(str[i]))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
int main() {
    char *s0 = strdup("c'i,a,o");
    char *s1 = strdup("salut, comMeEnt tu vas ? 42mots 
    quarante-deux; cinquante+et+un");
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
