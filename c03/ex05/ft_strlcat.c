/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:50:15 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 16:50:20 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	r;

	r = 0;
	while (str[r])
		r++;
	return (r);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ret;

	i = ft_strlen(dest);
	while (*src && i < size - 1)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = '\0';
	ret = ft_strlen(dest);
	if (ret > size)
		return (size);
	else
		return (ret);
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
