/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:56:57 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/28 17:24:26 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;
    
    i = 0;
    if(s == NULL)
        return (ft_strdup(""));
    str = malloc(sizeof(char) * (strlen(s) + 1));
    if(str == NULL)
        return (NULL);
    while(s[i])
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
char    ft_switch(unsigned int i, char c)
{
    if (c == 'a')
    {
        c = 'x';
        return (c);
    }
    else
        return (c);
}
#include <stdio.h>
int main()
{
    char    (*ptr)(unsigned int, char);
    ptr = &ft_switch;
    char str[] = "aaaaabbbaaabaaba";
    printf("%s", ft_strmapi(str, ptr));   
}
