/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:37:49 by francema          #+#    #+#             */
/*   Updated: 2024/05/20 19:13:33 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	
	i = 0;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';
	return (dest);
}
