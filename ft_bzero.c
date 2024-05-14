/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:50:45 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 19:39:39 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_bzero define um bloco de memória como zero.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		--n;
	}
}
/*
int	main(void)
{
    char buffer[20];
    ft_bzero(buffer, 10);
    ft_bzero(buffer + 10, 5);
    printf("%s\n", buffer);

	//Funcao original
	char buffer1[20];
    bzero(buffer1, 10);
    bzero(buffer1 + 10, 5);
    printf("%s\n", buffer1);
    return (0);
}*/