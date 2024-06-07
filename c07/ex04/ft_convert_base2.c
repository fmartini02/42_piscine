/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:55:50 by francema          #+#    #+#             */
/*   Updated: 2024/06/03 19:13:23 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ((char *) 0);
}

int	ft_nbr_len(char *nbr, char *base)
{
	int	i;
	int	len;

	i = 0;
	while(nbr[i] && (nbr[i] == '-' || nbr[i] == '+'))
		i++;
	while(nbr[i] && ft_strchr(base, nbr[i]))
	{
		i++;
		len++;
	}
	return (len);
}

int	ft_char_index(char c, char *base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	ft_get_sign(char *nbr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(nbr[i] && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i] == '-')
			count++;
		i++;
	}
	if(count % 2 == 0)
		return ('+');
	else
		return ('-');
}*/
