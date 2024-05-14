/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:47:28 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 21:38:58 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_toupper converte um caractere minúsculo em seu equivalente maiúsculo.

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

// int main(void) {
//     char c;

//     c = 'A';
//     printf("%c -> %c", c, toupper(c));

//     c = '-';
//     printf("\n%c -> %c\n", c, ft_toupper(c));
//     return (0);
// }