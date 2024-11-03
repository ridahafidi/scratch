/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:01:56 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/30 17:52:27 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;

t_list  *ft_lstlast(t_list *lst)
{
    while (lst->next)
        lst = lst->next;
    return(lst);
}
int main()
{
    t_list *root;

    root = malloc(sizeof(t_list));
    root->next = malloc(sizeof(t_list));
    root->next->next = malloc(sizeof(t_list));
    root->next->next->next = malloc(sizeof(t_list));
    root->next->next->next = NULL;
    t_list *ptr;
    ptr = ft_lstlast(root);
    
}