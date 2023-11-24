/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:30:54 by anquesad          #+#    #+#             */
/*   Updated: 2023/11/05 16:20:02 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convierte un carácter de minúscula a mayúscula

int	ft_toupper(int c)                  // Toma como argumento c

{
	if (c >= 'a' && c <= 'z')           // Tomará el valor establecido en este rango
		return (c - 32);            // Devolviendo la equivalencia a la inversa de ASCII (a - 32)
	return (c);                        // Si no es mayúscula, devolverá simplemente "c"
}
