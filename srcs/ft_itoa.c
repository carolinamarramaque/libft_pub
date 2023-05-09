/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:30:39 by carolina          #+#    #+#             */
/*   Updated: 2023/04/29 14:19:08 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count = 1;
	if (nb < 0)
	{
		count++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	int		size;
	long	nb;
	char	*str;

	nb = nbr;
	size = count(nb);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	size--;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[size] = nb % 10 + '0';
		size--;
		nb = nb / 10;
	}
	return (str);
}

/*
int	main()
{
	int	nb;

	nb = 0;
	printf("%d = %s\n", nb, ft_itoa(nb));
}*/
