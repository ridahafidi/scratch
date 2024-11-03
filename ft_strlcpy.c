/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:37 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:11:40 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *temp_src;
	char *temp_dst;
	size_t len;

	temp_src = src;
	temp_dst = dst;
	len = strlen(src);
	while ((dstsize - 1) > 0)
	{
		*temp_dst = *temp_src;
		temp_src++;
		temp_dst++;
		dstsize--;
	}
	if (dstsize > 0)
	{
		*temp_dst = '\0';
	}
	return (len);
}