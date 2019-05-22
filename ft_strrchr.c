/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:22:22 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/22 14:24:40 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		i;

	i = ft_strlen(str) + 1;
	if (str[i] == (char)c)
	{
		ptr = (char *)&str[i];
		return (ptr);
	}
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			ptr = (char *)&str[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
