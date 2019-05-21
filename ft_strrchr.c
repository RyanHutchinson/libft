/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:22:22 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/21 11:35:30 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str);

char	*ft_strchr(const char *str, int c)
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
