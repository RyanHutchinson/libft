/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:19:43 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/21 12:34:37 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		j = 0;
		while (str1[i] == str2[j])
		{
			if (str2[j + 1] == '\0' && i < n)
			{
				ptr = (char*)&str1[i - j];
				return (ptr);
			}
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
