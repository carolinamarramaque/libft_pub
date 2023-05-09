/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:51:41 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 16:02:49 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			res = (str[i] - 48) + res * 10;
			i++;
		}
		return (res * sign);
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("My function: %s >> %d\n", argv[1], ft_atoi(argv[1]));
	printf("Atoi function: %s >> %d\n", argv[1], atoi(argv[1]));
}*/
