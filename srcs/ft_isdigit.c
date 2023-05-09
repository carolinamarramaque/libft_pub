/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:36:22 by carolina          #+#    #+#             */
/*   Updated: 2023/03/15 15:42:52 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	int	numb = 2;

	printf("My function is %d\n", ft_isdigit(numb));
	printf("isdigit is %d\n", isdigit(numb));
	printf("My function is %d\n", ft_isdigit('a'));
	printf("isdigit is %d\n", isdigit('a'));
}*/
