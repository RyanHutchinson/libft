/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:37:42 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/22 13:23:51 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
