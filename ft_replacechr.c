/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replacechr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:31:31 by rhutchin          #+#    #+#             */
/*   Updated: 2019/06/19 08:09:20 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_replacechr(char **str, char f, char r)
{
	char	*ptr;

	if ((ptr = ft_strchr(*str, f)) == NULL)
		return (NULL);
	*ptr = r;
	return (ptr);
}
