/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:44:22 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 19:19:58 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_isalnum verifica se um determinado caractere 
// é um caractere alfabético ou um dígito.

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A'
				&& c <= 'Z')))
		return (1);
	else
		return (0);
}
/*
int	main(void) {
	printf("%d\n", ft_isalnum('9'));
    printf("%d\n", isalnum('9'));
}*/