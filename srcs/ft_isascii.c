/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:55:56 by carolina          #+#    #+#             */
/*   Updated: 2023/03/15 16:15:41 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("My function is %d\n", ft_isascii(111));
	printf("isalpha is %d\n", isascii(111));
	printf("My function is %d\n", ft_isascii(230));
	printf("isalpha is %d\n", isascii(230));
}*/
