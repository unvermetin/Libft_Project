/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aunver <aunver@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:54:52 by aunver            #+#    #+#             */
/*   Updated: 2023/07/26 14:29:14 by aunver           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		sizes1;
	int		sizes2;
	int		i;

	i = 0;
	sizes1 = (int)ft_strlen(s1);
	sizes2 = (int)ft_strlen(s2);
	str = malloc((sizes1 + sizes2 + 1) * sizeof(char));
	if (str == NULL)
		return (str);
	while (i < (sizes1 + sizes2))
	{
		if (i < sizes1)
			str[i] = s1[i];
		if (i >= sizes1)
			str[i] = s2[i - sizes1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
