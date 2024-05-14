/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:17:48 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 21:11:26 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_strlcpy copia uma string da origem para o destino
// com um limite de tamanho especificado.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
	{
		return (len);
	}
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (len);
}
/*
int	main(void)
{
    char dest[10] = "manga";
    char src[10] = "abacates";
    size_t size = 25;

    printf("Antes:%s\n", dest);
    printf("%zu\n", ft_strlcpy(dest, src, size)); 
    printf("Depois:%s\n", dest);
}*/