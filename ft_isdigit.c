e/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:37:52 by anquesad          #+#    #+#             */
/*   Updated: 2023/11/24 19:05:12 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cerifica si un carácter es un dígito

int	ft_isdigit(int c)               // Toma como valor un entero 'c'
{
	if (c >= '0' && c <= '9')      // Si entra dentro de este rango
		return (1);           // Devolverá su valor en 1.
	return (0);
}
