/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:39:43 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 19:36:51 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_memset preenche um bloco de memória com um valor especificado.

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*placeholder;

	placeholder = (unsigned char *)s;
	while (n > 0)
	{
		*placeholder = (unsigned char)c;
		placeholder++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
    char buffer[20];
    ft_memset(buffer, 'A', 10);
    ft_memset(buffer + 10, 'C', 10);
    printf("%s\n", buffer);

	//Funcao original
	char buffer1[20];
    memset(buffer1, 'A', 10);
    memset(buffer1 + 10, 'C', 10);
    printf("%s\n", buffer1);
    return (0);
}*/