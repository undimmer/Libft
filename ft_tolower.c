/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:39:35 by anquesad          #+#    #+#             */
/*   Updated: 2023/11/05 16:18:10 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta función convierte un carácter de mayúscula a minúscula 

int	ft_tolower(int a)                  // Toma como argumento 'a'

{
	if (a >= 'A' && a <= 'Z')           // Si 'a' está dentro del rango establecido
		return (a + 32);                  // La función devuelve a+32 (es la equivalencia de una mayúscula a minúscula en ASCII)
	return (a);                         // Si no es mayúscula, simplemente devolverá 'a'
}
