/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwietzke <iwietzke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:25:56 by iwietzke          #+#    #+#             */
/*   Updated: 2024/05/03 19:50:19 by iwietzke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 1);
	}
}

/*
int	main(void)
{
	ft_putendl_fd("hello", 0);
	ft_putendl_fd("hello", 1);
	ft_putendl_fd("hello", 2);
	//3 not in terminal
	ft_putendl_fd("hello", 3);
}*/