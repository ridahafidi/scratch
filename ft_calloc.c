/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhafidi <rhafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:29:54 by rhafidi           #+#    #+#             */
/*   Updated: 2024/11/09 13:29:45 by rhafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sum;

	sum = nmemb * size;
	ptr = malloc(sum);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, '\0', sum);
	return (ptr);
}
