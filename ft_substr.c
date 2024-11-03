/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:54 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:30:55 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    if (start > len)
        return ((char *)s);
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    ft_strlcpy(str, s + start, len + 1);
    return (str);
}