/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:27:05 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/28 17:49:59 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    while(s[i])
    {
        (*f)(i,s);
        i++;
    }
}

void    ft_switch(unsigned int i, char *str)
{
    if(str[i] == 'a')
        str[i] = 'z';
    else
        str[i] = 'b';
}
#include <stdio.h>
int main()
{
    void    (*ptr)(unsigned int, char*);
    ptr = &ft_switch;
    char str[] = "salamayarbi";
    ft_striteri(str, ptr);
    printf("%s",str);
}
