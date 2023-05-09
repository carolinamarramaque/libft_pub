/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:46:08 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 13:51:19 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>

int	main()
{
	int	a = 'a';
	int	b = 'B';

	printf("Char %c >> %c\n", a, ft_toupper(a));
	printf("Char %c >> %c\n", b, ft_toupper(b));
}*/
