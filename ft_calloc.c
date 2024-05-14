/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:03:16 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/01 17:31:07 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}
/*
int	main(void) {
    int* ptr;
    int n = 5;

    // Aloca memória para um array de 5 inteiros inicializados com zero
    ptr = (int*)ft_calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Falha na alocação de memória!");
        exit(1);
    }

    // Imprime os valores do array (todos devem ser zero)
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(ptr);

    return (0);
}*/