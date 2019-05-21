/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:31 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/20 14:11:02 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar (char c);
int		ft_strlen (char *str);
void	ft_putstr (char *str);
void	ft_putnbr (int nbr);

void	ft_swap(int *a, int *b);

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(const char *stri);

int		ft_strcmp(char *str1, char *str2);
int		ft_atoi(char *str);

#endif

