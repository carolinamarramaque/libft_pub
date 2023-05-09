/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:10:55 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 13:43:50 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s1[15] = "Hello World!";
	
	printf("My function: %s >> %s\n", s1, ft_strrchr(s1, 'l'));
	printf("Man's function: %s >> %s\n", s1, strrchr(s1, 'l'));
	printf("My function: %s >> %s\n", s1, ft_strrchr(s1, 'a'));
	printf("Man's function: %s >> %s\n", s1, strrchr(s1, 'a'));
}*/
