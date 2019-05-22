/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:31 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/22 16:29:29 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	*ft_bzero(void *str, size_t n);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);

char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *str1, const char *str2);

void	ft_swap(int *a, int *b);

int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
