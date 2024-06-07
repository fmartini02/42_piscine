/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 15:17:41 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 23:42:50 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	char					**mtx;
	int						i;
	unsigned long int		stocazzo;

	i = 0;
	stocazzo = 0;
	mtx = malloc(sizeof (char *) *1);
	*mtx = "";
	if (ac >= 2)
	{
		if(ft_check_input(ac, av) == 2)
			mtx = ft_get_mtx(ft_get_chars(ft_get_fd("../numbers.dict")));
		else if(ft_check_input(ac, av) == 3)
			mtx = ft_get_mtx(ft_get_chars(ft_get_fd(av[2])));
		else if(ft_check_input(ac, av) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (ft_check_dict(mtx))
		{
			ft_print_nb(mtx, ft_atoi(av[1]), &stocazzo);
			write(1, "\n", 1);
		}
		else
			printf("negro\n");
	}
	else
		write(1, "Error\n", 6);
	while(mtx[i])
		free(mtx[i++]);
	free(mtx);
}
