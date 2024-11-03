/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:49 by rhafidi           #+#    #+#             */
/*   Updated: 2024/10/27 20:30:50 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occurence;

	i = 0;
	last_occurence = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurence = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (last_occurence != -1)
		return ((char *)s + last_occurence);
	return (NULL);
}
