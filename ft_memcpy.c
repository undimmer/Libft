/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:34:32 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/13 10:53:38 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (src_ptr == NULL && dst_ptr == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
