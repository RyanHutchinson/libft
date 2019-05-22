/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:58:47 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/22 13:28:07 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)str;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
