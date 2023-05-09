/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:17:39 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 10:44:56 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	o = 111;
	int	A = 65;

	printf("My function is %d\n", ft_isalpha(A));
	printf("isalpha is %d\n", isalpha(A));
	printf("My function is %d\n", ft_isalpha(o));
	printf("isalpha is %d\n", isalpha(o));
	printf("My function is %d\n", ft_isalpha(2));
	printf("isalpha is %d\n", isalpha(2));
}*/
