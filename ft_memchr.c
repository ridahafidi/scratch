/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:26:52 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:26:53 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *temp_s;

    temp_s = (const unsigned char *)s;
    while (n > 0)
    {
        if (*temp_s == (unsigned char)c)
            return ((void *)temp_s);
        temp_s++;
        n--;
    }
    return NULL;
}
