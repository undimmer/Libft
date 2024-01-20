/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anquesad <anquesad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:39:56 by anquesad          #+#    #+#             */
/*   Updated: 2024/01/19 21:01:04 by anquesad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)                      // Esta función comienza a contar la cantidad de palabras en la cadena de entrada //
{
	size_t	i;
	size_t	numw;
	size_t	checkword;

	i = 0;
	numw = 0;
	checkword = 1;
	while (s[i])                                                       // Entra en bucle para recorrer la cadena y cuenta el número de palabras encontradas //
	{
		if (s[i] != c && checkword == 1)
		{
			numw++;
			checkword = 0;
		}
		if (s[i] == c)
			checkword = 1;
		i++;
	}
	return (numw);
}

static void	ft_delete(char **split)                                // Libera la memoria asignada dinámicamente para el array de cadenas de carácteres 'split' //
{
	size_t	j;

	j = 0;
	while (split[j] != NULL)                                        // Recorre el array liberando cada cadena y, finalmente, libera el propio array //
		free(split[j++]);
	free(split[j]);
	free(split);
}

static char	*make_word(const char *s, char c, size_t pos)         // Esta función crea una palabra a partir de la cadena original 's' utilizando el delimitador 'c' y la posición de inicio 'pos' //
{
	size_t	letcnt;
	char	*word;
	int		size;

	letcnt = pos;
	size = 0;
	while (s[letcnt] != c && s[letcnt])
	{
		size++;
		letcnt++;
	}
	word = ft_substr(s, pos, size);                                // Cuenta la longitud de la palabra utilizando la función ft_substr //
	if (!word)
		return (NULL);
	return (word);
}

char	**ft_split(char const *s, char c)                          // Función principal que inicializa un array de punteros de carácteres 'split' utilizando la función malloc //
{
	int		i;
	size_t	j;
	char	**split;

	i = -1;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split || !s)
		return (NULL);
	split[count_words(s, c)] = NULL;
	while (j < count_words(s, c) && s[++i])
	{
		if (s[i] != c)
		{
			split[j] = make_word(s, c, (size_t)i);
			if (!split[j])
			{
				ft_delete(split);
				return (NULL);
			}
			i += ft_strlen(split[j++]);
		}
	}
	return (split);
}
