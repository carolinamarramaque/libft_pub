/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 09:52:27 by carolina          #+#    #+#             */
/*   Updated: 2023/05/09 09:42:05 by cmarrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd(45, fd);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar_fd((nb + 48), fd);
	else
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10) + 48, fd);
	}
}
/*
#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<limits.h>

int	main()
{
	int	fd;

	fd = open("foo.txt", O_RDWR | O_CREAT);
	if (fd < 0)
		return (0);
	ft_putnbr_fd(INT_MIN, fd);
	ft_putchar_fd('\n', fd);
//	ft_putnbr_fd(2147483647, fd);
//	ft_putchar_fd('\n', fd);
//	ft_putnbr_fd(-10000043, fd);
//	ft_putchar_fd('\n', fd);
//	ft_putnbr_fd(0, fd);
//	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}*/
