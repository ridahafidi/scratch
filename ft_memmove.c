/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:25:42 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/03 21:28:56 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	foo(unsigned char *dst, const unsigned char *src, size_t len)
{
	while (len > 0)
	{
		*temp_dst = *temp_src;
		temp_dst++;
		temp_src++;
		len--;
	}
}
void	boo(unsigned char *dst, const unsigned char *src, size_t len)
{
	while (len > 0)
	{
		*temp_dst = *temp_src;
		temp_dst--;
		temp_src--;
		len--;
	}
}
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *temp_src;
	unsigned char *temp_dst;

	temp_src = (const unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	if (src < dst)
		foo(temp_dst, temp_src, len);
	else
		boo(temp_dst + len, temp_src + len, len);
	return (dst);
}
