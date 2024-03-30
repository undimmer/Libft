/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:11:14 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/19 21:42:48 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = lens1 + lens2;
	str = (char *)malloc(i + 1);
	if (!str)
		return (str);
	i = -1;
	while (++i < lens1)
		str[i] = s1[i];
	j = -1;
	while (++j < lens2)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
