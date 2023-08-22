/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:17:07 by aunver            #+#    #+#             */
/*   Updated: 2023/07/28 16:23:57 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	find;

	i = 0;
	find = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == find)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
