/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:59:12 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 15:50:08 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*int main() {
    char dest[20];
    char *src = "Hello, World!";

    unsigned int length = ft_strlcpy(dest, src, 20);

    printf("Copied string: '%s'\n", dest); // Output: "Hello, World!"
    printf("Length of copied string: %u\n", length); // Output: 13

    return 0;
}*/
