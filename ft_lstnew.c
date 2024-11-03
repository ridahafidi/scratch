/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:58:22 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/30 16:04:45 by rhafidi          ###   ########.fr       */
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

t_list  *ft_lstnew(void *content)
{
   t_list *root;

   root = malloc(sizeof(t_list));
   if (root = NULL)
    return (NULL);
   root->content = content;
   root->next = NULL;
   return (root);
}
