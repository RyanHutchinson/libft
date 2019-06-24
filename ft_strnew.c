/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:47:57 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/24 08:27:02 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char *new;

	if (!(new = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	ft_memset(new, 0, n + 1);
	new[n + 1] = '\0';
	return (new);
}
