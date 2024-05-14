/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:24:13 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 22:10:08 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_memcmp compara duas áreas de memória e retorna a diferença entre
// o primeiro byte diferente, se houver, ou 0 se as áreas de memória forem iguais.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] < p2[i])
		{
			return (-1);
		}
		else if (p1[i] > p2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
    const char *str1 = "hello";
    const char *str2 = "world";
    size_t num = 3;

    int result = ft_memcmp(str1, str2, num);

    if (result < 0) {
        printf("str1 é lexicograficamente menor que str2\n");
    } else if (result > 0) {
        printf("str1 é lexicograficamente maior que str2\n");
    } else {
        printf("str1 é igual a str2\n");
    }
    return (0);
}*/