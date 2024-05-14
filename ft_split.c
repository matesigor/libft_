/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:01:07 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 21:07:55 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_len;
	int		i;

	result = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	result[i] = NULL;
	return (result);
}

int	main()
{
	char **result;
    // Teste com uma string simples
    printf("Teste 1:\n");
    result = ft_split("Isabella neves ribeiro", 'e');
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Erro: a função ft_split retornou NULL\n");
}