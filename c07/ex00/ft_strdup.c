/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:46:23 by francema          #+#    #+#             */
/*   Updated: 2024/05/27 18:47:57 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return(0);
}

char	*ft_strdup(char *str)
{
	int		size;
	char	*dup;
	int		i;

	size = ft_strlen(str);
	dup = malloc (sizeof(char) * size + 1);
	i = 0;
	if (!dup)
		return(NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int main() {
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate) {
        printf("Original string: '%s'\n", original);
        printf("Duplicated string: '%s'\n", duplicate);
        free(duplicate); // Remember to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
