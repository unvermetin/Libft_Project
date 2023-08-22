/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:49:35 by aunver            #+#    #+#             */
/*   Updated: 2023/07/28 16:27:38 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str;
	char	*dest;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dest = (char *)dst;
	i = 0;
	str = (char *)src;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dst);
}
