/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:12:39 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/21 13:33:31 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (((str1[i] == '\0' && str2[i] != '\0') ||
				(str2[i] == '\0' && str1[i] != '\0')) && (i < n))
		return (str1[i] - str2[i]);
	return (0);
}
