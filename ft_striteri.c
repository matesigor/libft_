/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:50:34 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/09 21:15:32 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (NULL == s || NULL == f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	uppercase(unsigned int i, char *c)
{
    while (c[i])
    {
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] - 32; // Convertendo para maiúscula
        } else {
            c[i]; // Mantendo outros caracteres inalterados
        }
        i++;
    }
}
int	main(void) {
    char str[] = "HELLO, world!";

    printf("String original: %s\n", str);
    
    // Chamando ft_striteri com a função ft_capitalize
    ft_striteri(str, uppercase);
    
    printf("String modificada: %s\n", str);
    
    return (0);
}
*/