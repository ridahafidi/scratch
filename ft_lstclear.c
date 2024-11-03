/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:33:01 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/01 14:43:43 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include "libft.h"
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

void    delete(void *c)
{
    c = (void *)NULL;
}

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    if((*lst)->next)
        ft_lstclear(&((*lst)->next), &delete);
    (del)((*lst)->content);
    (*lst)->next = NULL;
    free(*lst);
    (*lst) = NULL;
}

int main()
{
    t_list *root;
    t_list *lst;
    
    root = malloc(sizeof(t_list));
    root->next = malloc(sizeof(t_list));
    root->next->next =malloc(sizeof(t_list));
    root->next->next = NULL;
    lst = root;
    lst = lst->next;
    ft_lstclear(&lst, &delete);
}
