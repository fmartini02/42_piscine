/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:14:13 by francema          #+#    #+#             */
/*   Updated: 2024/06/05 12:31:43 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# include <stdbool.h>
# define EVEN(nbr) ((nbr) % 2 == 0)
# define TRUE  1
# define FALSE  0
# define EVEN_MSG  "i have an even number of arguments.\n"
# define ODD_MSG  "i have an odd number of arguments.\n"
# define SUCCESS 0

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
