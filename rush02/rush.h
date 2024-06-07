/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:49:39 by francema          #+#    #+#             */
/*   Updated: 2024/06/02 21:48:05 by francema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

char	**ft_get_mtx(char *inputs);
char	**ft_split(char const *s, char c);
char	**ft_sort_mtx(char **mtx);
int		ft_check_rules(char *str);
int		ft_check_dup(char **mat);
int		ft_check_nbr(char **mat);
int		ft_check_dict(char **mtx);
int		ft_check_input(int arc, char **arv);
int		ft_check_empty_line(char *str);
int		ft_check(char **mat, char *check, int count);
int		ft_is_printable(char *str);
int		ft_strncmp(char *s1, char *s2);
int		ft_strcmp_s(char *s1, char *s2);
unsigned long int	ft_atoi(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_count_words(const char *s, char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_get_fd(char *file);
char	*ft_get_chars(int fd);
void	ft_print_mat(char **mat);
void	ft_pustr(char *s, unsigned long int *count);
void	ft_print_dec(char **mtx, unsigned long int nb, unsigned long int *count);
void	ft_print_hundred(char **mtx, unsigned long int nb, unsigned long int *count);
void	ft_print_thousand(char **mtx, unsigned long int nb, unsigned long int *count);
void	ft_print_million(char **mtx, unsigned long int nb, unsigned long int *count);
void	ft_print_billion(char **mtx, unsigned long int nb, unsigned long int *count);
void	ft_print_nb(char **mtx, unsigned long int nb, unsigned long int *len);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_refine_mtx(char **mtx);
char	**ft_sort_mtx(char **mtx);
#endif
