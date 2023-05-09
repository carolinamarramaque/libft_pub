/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 09:28:24 by carolina          #+#    #+#             */
/*   Updated: 2023/03/25 10:11:45 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
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
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}*/
