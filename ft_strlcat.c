/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:35 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:11:33 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *temp_dst;
	const char *temp_src;
	size_t len;

	len = strlen(dst);
	if (*src == '\0')
		return (len);
	temp_dst = dst + len;
	temp_src = src;
	while ((size - len - 1) > 0)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		size--;
	}
	*temp_dst = '\0';
	len = strlen(dst);
	return (len);
}