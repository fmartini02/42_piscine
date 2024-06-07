/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:08:09 by francema          #+#    #+#             */
/*   Updated: 2024/06/06 15:52:46 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_strlen_m(char **ss, int size, int i, int j)
{
	int	len;

	len = 0;
	while (i < size)
	{
		j = 0;
		len += ft_strlen(ss[i]);
		i++;
	}
	return (len);
}

void	ft_put_sep(char *str, char *to_add, int i, int *j)
{
	while (to_add[i])
		str[(*j)++] = to_add[i++];
}

void	ft_put_str_in_str(char *str, char *to_add, int *j)
{
	int	i;

	i = 0;
	while (to_add[i])
		str[(*j)++] = to_add[i++];
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*all_s;

	if (size == 0)
	{
		all_s = malloc(sizeof(char));
		all_s[0] = '\0';
		return (all_s);
	}
	all_s = malloc(sizeof(char) * (ft_strlen_m(strs, size, 0, 0)
				+ (ft_strlen(sep) * size - 1)) + 1);
	if (!all_s)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_put_str_in_str(all_s, strs[i], &j);
		if (i < size -1)
			ft_put_sep(all_s, sep, 0, &j);
		i++;
	}
	all_s[j] = '\0';
	return (all_s);
}

int	main(int ac, char **av)
{
	char	*s = ft_strjoin(ac, av, av[1]);
	printf("%s\n", s);
}
