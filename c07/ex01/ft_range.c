/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:43:24 by francema          #+#    #+#             */
/*   Updated: 2024/06/03 15:55:21 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return((int *) 0);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return((int *) 0);
	while (min < max)
		range[i++] = min++;
	return (range);
}
/*
int main() {
	int *range;
	int min, max, i;

	// Test Case 1: Normal range
	min = 1;
	max = 5;
	range = ft_range(min, max);
	if (range) {
		printf("Range from %d to %d: ", min, max);
		for (i = 0; i < max - min; i++) {
			printf("%d ", range[i]);
		}
		free(range);
		printf("\n");
	} else {
		printf("Range from %d to %d: NULL\n", min, max);
	}

	// Test Case 2: min == max
	min = 5;
	max = 5;
	range = ft_range(min, max);
	if (range) {
		printf("Range from %d to %d: ", min, max);
		for (i = 0; i < max - min; i++) {
			printf("%d ", range[i]);
		}
		free(range);
		printf("\n");
	} else {
		printf("Range from %d to %d: NULL\n", min, max);
	}

	// Test Case 3: min > max
	min = 10;
	max = 5;
	range = ft_range(min, max);
	if (range) {
		printf("Range from %d to %d: ", min, max);
		for (i = 0; i < max - min; i++) {
			printf("%d ", range[i]);
		}
		free(range);
		printf("\n");
	} else {
		printf("Range from %d to %d: NULL\n", min, max);
	}

	// Test Case 4: Large range
	min = -5;
	max = 5;
	range = ft_range(min, max);
	if (range) {
		printf("Range from %d to %d: ", min, max);
		for (i = 0; i < max - min; i++) {
			printf("%d ", range[i]);
		}
		free(range);
		printf("\n");
	} else {
		printf("Range from %d to %d: NULL\n", min, max);
	}

	return 0;
}
*/
