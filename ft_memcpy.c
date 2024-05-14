/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:45:09 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 19:46:05 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_memcpy copia um bloco de memória da origem para o destino.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;
	size_t				i;

	if (!dest && !src)
		return (dest);
	char_dest = (unsigned char *)dest;
	char_src = src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void) {
    // Uma videoaula

    char src[] = "abcdefghijklmnopqrstuvwxyz";
	char dest[27];

	printf("\nSrc: %s\n", src);
	ft_memcpy(dest, src, sizeof(char) * 27);
	printf("Dest: %s\n", dest);

	char nova[10];
    ft_memcpy(nova, src+8, sizeof(char) * 9);
    nova[9] = '\0';

    printf("nova: %s\n", nova);
    printf("\n");
    printf("-------------------------\n");
    printf("\n");

    // Outra videoaula

    char src1[] = "copy this";
    char dest1[100];

    char *dest_ptr = ft_memcpy(dest1, src1, strlen(src1)+1);

    printf("src: %s\n", src1);
    printf("dest: %s\n", dest1);

    printf("dest_ptr: %p\n", dest_ptr);
    printf("    dest: %p\n", dest1);
    printf("\n");

	return(0);
}*/