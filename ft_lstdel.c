/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:52:30 by rhutchin          #+#    #+#             */
/*   Updated: 2019/05/27 14:23:43 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *ptr;
	t_list *ptrnxt;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		ptrnxt = ptr->next;
		ft_lstdelone(&ptr, del);
		ptr = ptrnxt;
	}
	ft_lstdelone(alst, del);
	*alst = NULL;
}
