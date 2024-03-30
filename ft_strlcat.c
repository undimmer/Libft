/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:18:04 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/19 21:31:50 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	l_src;
	unsigned int	l_dest;
	unsigned int	i;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i + 1 + l_dest < dstsize)
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	if (dstsize < l_dest)
	{
		dest[l_dest + i] = '\0';
		return (dstsize + l_src);
	}
	dest[l_dest + i] = '\0';
	return (l_src + l_dest);
}
