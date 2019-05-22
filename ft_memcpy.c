/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:21:03 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/22 14:27:01 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			i;

	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}
	return (dest);
}
