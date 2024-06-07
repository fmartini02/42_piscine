/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:09:11 by francema          #+#    #+#             */
/*   Updated: 2024/05/22 12:50:55 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_esa(int c)
{
	char	*ciphers;

	ciphers = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(ciphers[c / 16]);
	ft_putchar(ciphers[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] && str[i] <= 31) || (str[i] == 127))
			ft_print_esa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main()
{
	char	*str = " ciao \001 SOH \002 STX \003 ETX 
	\004 EOT \005 ENQ \006 ACK \007 BEL \010 BS \011 
	HT  \012 LF \013 VT \014 FF \015 CR \016 SO \017 
	SI \020 DLE \021 DC1 \022 DC2 \023 DC3 \024 DC4 
	\025 NAK \026 SYN \027 ETB \030 CAN \031 EM \032 
	SUB \033 ESC \034 FS \035 GS \036 RS \037 US \177 DEL ";
	ft_putstr_non_printable(str);
}*/
