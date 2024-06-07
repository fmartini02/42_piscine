/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:57:50 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 21:28:53 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

unsigned long int	ft_atoi(char *str)
{
	unsigned long int	i;
	unsigned long int	sign;
	unsigned long int	n;

	i = 0;
	sign = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

void	ft_print_mat(char **mat)
{
	int	j;

	j = 0;
	while (mat[j])
	{
		printf("%s\n", mat[j++]);
	}
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_count_words(const char *s, char c)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] >= '0' && s2[i] >= '0'
		&& s1[i] != ':' && s2[i] != ':')
		i++;
	if ((s1[i] < '0' || s1[i] == ':') && (s2[i] < '0' || s2[i] == ':'))
		return (0);
	return (s1[i] - s2[i]);
}
