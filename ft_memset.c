/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:26:29 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:26:30 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp_b;

    temp_b = (unsigned char *)b;
    while (len > 0)
    {
        *temp_b = (unsigned char)c;
        temp_b++;
        len--;
    }
    return (b);
}