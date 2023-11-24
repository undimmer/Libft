/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:47:13 by anquesad          #+#    #+#             */
/*   Updated: 2023/09/17 12:49:33 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Verifica si un carácter es alfanumérico

int ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));        // Toma un argumento 'c' que se espera que sea un valor de tipo entero.
}                                                      // Utiliza las funciones ft_isalpha y ft_isfigit para comprobar si es una letra o un dígito.
