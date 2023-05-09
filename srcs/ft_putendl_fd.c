/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 09:47:06 by carolina          #+#    #+#             */
/*   Updated: 2023/03/25 10:12:52 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>

int	main()
{
	int	fd;

	fd = open("foo.txt", O_RDWR | O_CREAT);
	if (fd < 0)
		return (0);
	ft_putendl_fd("Hello World", fd);
	close(fd);
	return (0);
}*/
