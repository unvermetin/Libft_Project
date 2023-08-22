/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:45:26 by aunver            #+#    #+#             */
/*   Updated: 2023/07/26 13:39:39 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	dstsize;
	size_t	str;
	size_t	srcsize;
	size_t	i;

	s = (char *)src;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(s);
	str = 0;
	i = 0;
	if (size > dstsize)
		str = srcsize + dstsize;
	else
		str = srcsize + size;
	while (s[i] && (dstsize + 1) < size)
	{
		dst[dstsize] = s[i];
		dstsize++;
		i++;
	}
	dst[dstsize] = '\0';
	return (str);
}
