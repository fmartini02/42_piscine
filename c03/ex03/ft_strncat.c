/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:08:00 by francema          #+#    #+#             */
/*   Updated: 2024/05/20 19:12:47 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && i <= nb)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
}
