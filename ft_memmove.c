/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:25:42 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:25:44 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    const unsigned char *temp_src;
    unsigned char *temp_dst;

    temp_src = (const unsigned char *)src;
    temp_dst = (unsigned char *)dst;
    if (src < dst)
    {
        while (len > 0)
        {
            *temp_dst = *temp_src;
            temp_dst++;
            temp_src++;
            len--;
        }
    }
    else
    {
        temp_dst += len;
        temp_src += len;
        while (len > 0)
        {
            *temp_dst = *temp_src;
            temp_dst--;
            temp_src--;
            len--;
        }
    }
    return (dst);
}

int main()
{
    char str[] = "abcde";
    char *s;

    s = ft_memmove(str + 2, str, 2);
    printf("%s\n",s);
    return 0;
}
