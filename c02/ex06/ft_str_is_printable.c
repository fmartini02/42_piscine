/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:22:13 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:44:44 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	ret;

	ret = 0;
	while (*str)
	{
		if ((*str >= 9 && *str <= 11) || (*str >= 32 && *str <= 126))
			str++;
		else
			break ;
	}
	if (!*str)
		ret = 1;
	return (ret);
}
