/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:00:06 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:00:09 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_del(void *str, size_t size)
{
	ft_bzero(str, size);
	ft_memdel(&str);
}

static t_list	*free_list(t_list **ls_begin)
{
	ft_lstdel(ls_begin, ft_del);
	free(*ls_begin);
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_el;
	t_list	*ls_begin;

	new_el = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (new_el == NULL)
		{
			ft_lstadd(&new_el, f(lst));
			if (!new_el)
				return (NULL);
			ls_begin = new_el;
		}
		else
		{
			if (!(new_el->next = f(lst)))
				free_list(&ls_begin);
			new_el = new_el->next;
		}
		lst = lst->next;
	}
	return (ls_begin);
}
