/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:29:06 by anquesad          #+#    #+#             */
/*   Updated: 2023/11/24 19:02:25 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Verifica si un carácter es alfabético

int	ft_isalpha(int c)                                         // Toma como argumento 'c'
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))       // Aquí verifica si el valor de 'c' está dentro del rango del alfabeto  
		return (1);                                         // Devolverá 1 si indica que es una letra o un 0 indicando que el caracter no es una letra
	return (0);
}
