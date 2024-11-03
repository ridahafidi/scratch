/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:56:06 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 14:05:13 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}
int	main(void)
{
	t_list *root;
	t_list *lst;
	t_list *newnode;

	root = malloc(sizeof(t_list));
	root->next = malloc(sizeof(t_list));
	root->next->next = malloc(sizeof(t_list));
	root->next->next = NULL;
	newnode = malloc(sizeof(t_list));
	lst = root;
	ft_lstadd_back(&lst, newnode);
}