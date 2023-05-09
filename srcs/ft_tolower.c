/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:52:30 by carolina          #+#    #+#             */
/*   Updated: 2023/03/16 13:53:39 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>

int	main()
{
	int	a = 'a';
	int	b = 'B';

	printf("Char %c >> %c\n", a, ft_tolower(a));
	printf("Char %c >> %c\n", b, ft_tolower(b));
}*/
