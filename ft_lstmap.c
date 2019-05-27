/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:34:51 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/27 15:59:31 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	if (tmp == NULL)
		ft_lstadd(lst, new);
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list *new;

	while (lst != NULL)
	{
		ft_lstaddback(&new, f(lst));
		lst = lst->next;
	}
	return (new);
}
