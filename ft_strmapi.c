/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:57:07 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/09 21:20:37 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	while (s[i])
		i++;
	result = (char *)malloc(i + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	uppercase(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z') {
        return (c - 32); // Convertendo para maiúscula
    } else {
        return (c); // Mantendo outros caracteres inalterados
    }
}
int	main(void)
{
    char original[] = "Hello, world!";
    char *modified;

    // Aplicando a função ft_strmapi para modificar a string original
    modified = ft_strmapi(original, uppercase);

    // Imprimindo a string original e a string modificada
    printf("Original: %s\n", original);
    printf("Modified: %s\n", modified);

    // Liberando a memória alocada para a string modificada
    free(modified);

    return (0);
}*/