#include <stdlib.h>

static int	ft_count_palabras(char const *s, char c)
{
    int palabras = 0;

    while (*s != '\0') {
        //Ignoramos delimitadores al inicio
        while (*s == c)
            s++;

        if (*s != '\0') {
            palabras++;  // Contamos palabra
            //recorremos el resto de la palabra
            while (*s != c && *s != '\0')
                s++;
        }
    }
    return (palabras);
}

static void	ft_copy_palabra(char const **s, char *palabras, char c)
{
    while (**s != '\0' && **s != c) {
        *palabras = **s;
        palabras++;
        (*s)++;
    }
    *palabras = '\0';  //Carácter nulo al final
}

char	**ft_split(char const *s, char c)
{
    int		palabras;
    char	**split_palabra;
    char	*palabra;
    int		i;

    if (!s)
        return (NULL);

    palabras = ft_count_palabras(s, c);
    split_palabra = (char **)malloc(sizeof(char *) * (palabras + 1));
    if (!split_palabra)
        return (NULL);

    i = 0;
    while (i < palabras) {
        //Ignoramos delimitadores al inicio
        while (*s == c)
            s++;

        // Copiamos la palabra actual
        palabra = (char *)malloc(sizeof(char) * (strlen(s) + 1));
        if (!palabra)
            return (NULL);
        ft_copy_palabra(&s, palabra, c);

        split_palabra[i] = palabra;
        i++;
    }
    split_palabra[i] = NULL;
    return (split_palabra);
}
