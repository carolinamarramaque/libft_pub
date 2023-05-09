/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:03:16 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 10:44:29 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("My function is %d\n", ft_isprint(48));
	printf("isalnum is %d\n", isprint(48));
	printf("my function is %d\n", ft_isprint(10));
	printf("isalnum is %d\n", isprint(10));
}*/
