/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:05:41 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/30 16:37:31 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

void    ft_lstadd_front (t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main()
{
    t_list *root;
    t_list **lst;
    t_list *newnode;
    
    root = malloc(sizeof(t_list));
    newnode = malloc(sizeof(t_list));
    root->next = malloc(sizeof(t_list));
    root->next->next =malloc(sizeof(t_list));
    root->next->next = NULL;
    lst = root;
    ft_lstadd_front(lst, newnode);
}