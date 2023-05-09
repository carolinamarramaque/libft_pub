/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:44:08 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 10:45:42 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	printf("My function is %d\n", ft_isalnum(48));
	printf("isalnum is %d\n", isalnum(48));
	printf("my function is %d\n", ft_isalnum(65));
	printf("isalnum is %d\n", isalnum(65));
	printf("my function is %d\n", ft_isalnum('.'));
	printf("isalnum is %d\n", isalnum('.'));
}*/
