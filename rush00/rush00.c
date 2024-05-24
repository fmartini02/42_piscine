/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 10:57:31 by francema          #+#    #+#             */
/*   Updated: 2024/05/18 13:59:41 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_INT 2147483647

void	ft_putchar(char c);

void	print_line(long int x, char init, char mid, char last)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(init);
		else if (i < x)
			ft_putchar(mid);
		else
			ft_putchar(last);
		i++;
	}
}

void	rush(long int x, long int y)
{
	int	j;

	j = 1;
	if (x > MAX_INT || y > MAX_INT)
		return ;
	while (j <= y)
	{
		if (j == 1)
			print_line(x, 'o', '-', 'o');
		else if (j < y)
			print_line(x, '|', ' ', '|');
		else
			print_line(x, 'o', '-', 'o');
		j++;
		ft_putchar('\n');
	}
}
