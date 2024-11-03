/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:44:09 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/30 17:01:32 by rhafidi          ###   ########.fr       */
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

int ft_lstsize(t_list *lst)
{
    int i;
    
    i = 0;
    if (lst == NULL)
        return (i);
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return i;
}
int main()
{
    t_list *root;

    root = malloc(sizeof(t_list));
    root->next = malloc(sizeof(t_list));
    root->next->next = malloc(sizeof(t_list));
    root->next->next->next = malloc(sizeof(t_list));
    root->next->next->next = NULL;
    printf("%d",ft_lstsize(root));
}