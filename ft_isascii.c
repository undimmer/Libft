/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:43:40 by anquesad          #+#    #+#             */
/*   Updated: 2023/11/24 19:04:41 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Verifica si un carácter es un carácter ASCII

int	ft_isascii(int c)            // Toma un valor 'c'
{
	if (c >= 0 && c <= 127)       // Si el valor está dentro del rango ASCII
		return (1);                 // Devolverá 1 si es correcto.
	return (0);
}
