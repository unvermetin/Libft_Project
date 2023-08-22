/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:25:40 by aunver            #+#    #+#             */
/*   Updated: 2023/07/28 16:58:45 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenneedle;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	lenneedle = ft_strlen(needle);
	if (lenneedle == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i + j] != '\0' && needle[j] != '\0'
			&& hay[i + j] == needle[j] && i + j < len)
			j++;
		if (j == lenneedle)
			return (hay + i);
		i++;
	}
	return (0);
}
