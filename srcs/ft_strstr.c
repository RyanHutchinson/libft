/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:42:46 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/21 12:12:17 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str1[i] == str2[j])
		{
			if (str2[j + 1] == '\0')
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
