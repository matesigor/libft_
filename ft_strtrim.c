/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:46:05 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/13 20:55:06 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_strtrim corta caracteres iniciais e finais
// de uma string com base em um determinado conjunto de caracteres

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	trimmed = ft_substr(s1, start, end - start + 1);
	return (trimmed);
}
/*
int	main(void)
{
    char str[] = "Internacional";
    char set[] = "nacional";

    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str != NULL)
    {
        printf("String original: %s\n", str);
        printf("String trimada: %s\n", trimmed_str);
        free(trimmed_str);
    }
    else
        printf("Erro\n");

    return (0);
}*/