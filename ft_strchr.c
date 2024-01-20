/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:18:19 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/19 20:31:25 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Esta función busca la primera ocurrencia de un carácter específico 'c' en una cadena de carácteres 's' //
// La función devuelve un puntero a la primera aparación de ese carácter en la cadena //

char	*ft_strchr(const char *s, int c)      // Comienza con la declaración de la función. Toma dos parámetros;//
{                                           // Un puntero a una cadena de carácteres "const char *s y un tenero 'int c' //
	int	i;

	i = 0;
	while ((char)s[i])                        // Bucle que comienza a recorrer la cadena 's' hasta que se alcanza el carácter nulo null //
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')                     // Aquí se verifica si el carácter 'c' es el carácter nulo '\0' //
		return (&((char *)s)[i]);              // Si es así, devuelve un puntero al final de la cadena //
	return (0);
}
