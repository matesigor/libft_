/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:41:38 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/09 21:19:08 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*newstr;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		newstr[i++] = s2[j];
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(void)
{
	char str1[] = "isa";
	char str2[] = "bellas";

	char *join = ft_strjoin(str1, str2);

	if (join != NULL)
    {
        printf("Resultado: %s\n", join);
        free(join);
    }
    else
        printf("Erro: inválido.\n");

    return (0);
}*/