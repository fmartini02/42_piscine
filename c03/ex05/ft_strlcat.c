/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:50:15 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 15:23:44 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	r;

	r = 0;
	while (str[r])
		r++;
	return (r);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char dest[15] = "Hello";
	char *src = " World";
   	unsigned int dest_size = sizeof(dest);
    	unsigned int result = strlcat(dest, src, dest_size);
   	printf("Destination: '%s'\n", dest);
    	printf("Total length: %u\n", result);

	char	d[15] = "hello";
	char	*s = "world";
    	result = ft_strlcat(d, s, 15);
   	printf("Destination: '%s'\n", d);
    	printf("Total length: %u\n", result);
 	return 0;
}*/
