/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:14:34 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/14 19:51:30 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_memmove copia um bloco de memória da origem para o destino, 
// manipulando regiões de memória sobrepostas.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (!n || dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(dest_ptr, src_ptr, n);
	else if (dest > src)
	{
		while (n > 0)
		{
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return (dest_ptr);
}
/*{
   unsigned char *char_dest = dest;
   const unsigned char *char_src = src;

   if (!dest && !src)
      return (dest);
	if (dest < src)
		return (memcpy(dest, src, n));
   if (dest > src)
   {
      while (n--)
      {
         char_dest[n] = char_src[n];
      }
   }
	return (dest);
}*/
/*
int main () {
   char dest[] = "oldstring";
   const char src[]  = "novastring";

   printf("Before memmove src = %s, dest = %s\n", src, dest);
   ft_memmove(dest, src, 1);
   printf("After memmove src = %s, dest = %s\n", src, dest);

   return(0);
}*/
