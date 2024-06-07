/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_mtx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:00:18 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 23:22:25 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int ft_get_fd(char *file)
{
	int fd;

	fd = open(file, O_RDONLY, O_CREAT, O_EXCL);
	if (fd == -1)
	{
		write(1, "wrong name\n", 11);
		return (-1);
	}
	else
		return (fd);
}

char *ft_get_chars(int fd)
{
	char *chars;
	char buffer[2];
	int flag;

	chars = malloc(sizeof(char) * 1);
	chars = "";
	flag = 1;
	while (flag)
	{
		flag = read(fd, buffer, 1);
		if (flag == -1 || flag == 0)
			flag = 0;
		else
			chars = ft_strjoin(chars, buffer);
	}
	return (chars);
}

void ft_free(char **mtx, int i, int len)
{
	while (i < len && mtx[i])
	{
		free(mtx[i++]);
	}
	free(mtx);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		ii;
	int		lensub;

	res = (char **)ft_calloc(sizeof(char *), (ft_strlen(s) / 2) + 8);
	i = 0;
	ii = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		lensub = i;
		while (s[lensub] != c && s[lensub])
			lensub++;
		lensub -= i;
		if (lensub)
			res[ii] = ft_substr(s, i, lensub);
		ii++;
		i += lensub;
	}
	return (res);
}
char **ft_get_mtx(char *inputs)
{
	char **dictionary;

	dictionary = ft_split(inputs, '\n');
	return (dictionary);
}
