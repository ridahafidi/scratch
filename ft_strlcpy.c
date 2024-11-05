/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:30:37 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/05 13:36:30 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	if (dstsize > 0)
	{
		while (dstsize > 1 && *src)
		{
			*dst = *src;
			src++;
			dst++;
			dstsize--;
		}
		*dst = '\0';
	}
	return (len);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dst[15];

// 	printf("%zu\n", ft_strlcpy(dst, "", 15));
// 	printf("%zu", strlcpy(dst, "", 15));
// }
