/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 17:46:31 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 21:54:42 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**ft_refine_mtx(char **mtx)
{
	char	**ret;
	int		i;
	int		j;

	ret = malloc(sizeof(char *) * 32 + 1);
	i = 0;
	j = 0;
	while (mtx[i])
	{
		if (!(mtx[i][0] >= '0' && mtx[i][0] <='9'))
			i++;
		else if (mtx[i][0]>= '0')
			ret[j++] = mtx[i++];
	}
	//free(mtx);
	return (ret);
}

char	**ft_sort_mtx(char **mtx)
{
	int		flag;
	int		i;
	char	**ret;
	char	*tmp;

	flag = 1;
	ret = ft_refine_mtx(mtx);
	while(flag)
	{
		flag = 0;
		i = 0;
		while(ret[i + 1])
		{
			if(ft_atoi(ret[i]) > ft_atoi(ret[i + 1]))
			{
				tmp = ret[i];
				ret[i] = ret[i + 1];
				ret[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
	return (ret);
}
