/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:28:10 by aunver            #+#    #+#             */
/*   Updated: 2023/07/28 15:29:30 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	total_size;

	total_size = (size_t)count * (size_t)size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(1));
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	ft_memset((unsigned char *)arr, 0, count * size);
	return (arr);
}
