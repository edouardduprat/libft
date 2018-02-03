/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 10:41:32 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/24 10:44:29 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*n;

	if (!lst)
		return (NULL);
	n = f(lst);
	tmp = n;
	while (lst->next)
	{
		lst = lst->next;
		n->next = f(lst);
		if (!(n->next))
			return (NULL);
		n = n->next;
	}
	return (tmp);
}
