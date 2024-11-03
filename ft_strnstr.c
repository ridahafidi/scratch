/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:46 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:29:40 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#//include "libft.h"
#include <stddef.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
