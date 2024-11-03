/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:26:05 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:26:06 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *temp_s1;
    const unsigned char *temp_s2;

    temp_s1 = (const unsigned char *)s1;
    temp_s2 = (const unsigned char *)s2;
    while (n > 0)
    {
        if (*temp_s1 != *temp_s2)
            return (*temp_s1 - *temp_s2);
        temp_s1++;
        temp_s2++;
        n--;
    }
    return (0);
}
