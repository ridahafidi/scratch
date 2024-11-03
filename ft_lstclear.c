/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:33:01 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:28:13 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void delete (void *c)
{
	c = (void *)NULL;
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next), &delete);
	(del)((*lst)->content);
	(*lst)->next = NULL;
	free(*lst);
	(*lst) = NULL;
}
