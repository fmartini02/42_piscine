/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:53:27 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 17:58:54 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*res;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (lens1 + lens2) + 1);
	ft_memcpy(res, s1, lens1);
	ft_memcpy(&res[lens1], s2, lens2);
	res[lens1 + lens2] = '\0';
	return (res);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(nmemb * size);
	if (res)
		ft_bzero(res, nmemb * size);
	return (res);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len && s[i])
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

