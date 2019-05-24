/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:41:46 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/23 11:00:20 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t n)
{
	int		*new;
	size_t	i;

	i = 0;
	if (!(new = malloc(n)))
		return (NULL);
	ft_bzero(new, n);
	return (new);
}
