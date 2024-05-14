/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:30:22 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/09 21:27:57 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if ((!new_string))
		return (NULL);
	while (*s)
	{
		new_string[i++] = *s++;
	}
	new_string[i] = '\0';
	return (new_string);
}
/*
int	main(void)
{
    char array1[] = "programming";
    char *p;
    printf("The string in array1 is %s\n", array1);
    p = ft_strdup(array1);
    printf("The duplicated string is %s\n", p);
    return (0);
}*/