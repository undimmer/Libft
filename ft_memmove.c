/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:55:23 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/19 22:29:45 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_ptr;
	char	*src_ptr;

	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (len == 0)
		return (dst);
	if (dst_ptr > src_ptr)
	{
		while (0 < len)
		{
			dst_ptr[len - 1] = src_ptr[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst_ptr, src_ptr, len);
	return (dst);
}
