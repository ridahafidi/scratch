/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:54:47 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:08:59 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next), &delete);
	(del)((*lst)->content);
	(*lst)->next = NULL;
	free(*lst);
	(*lst) = NULL;
}
int	safe_malloc(t_list **ptr, void (*del)(void *))
{
	*ptr = malloc(sizeof(t_list));
	if (!*ptr)
	{
		ft_lstclear(&(*ptr), del);
		return (1);
	}
	return (0);
}
t_list	*create(t_list *newroot, t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*prev;
	t_list	*save_root;
	int		heap_root;

	heap_root = 0;
	prev = NULL;
	while (lst)
	{
		if (!safe_malloc(&newroot, del))
		{
			if (!heap_root)
			{
				heap_root = 1;
				save_root = newroot;
			}
			newroot->content = (*f)(lst->content);
			if (prev)
				prev->next = newroot;
			prev = newroot;
			newroot = newroot->next;
		}
		lst = lst->next;
	}
	prev->next = NULL;
	return (save_root);
}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newroot;
	newroot = create(newroot, lst, f, del);
	return (newroot);
}