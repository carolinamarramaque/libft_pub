/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:55:45 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 13:40:46 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s1[15] = "teste";
	
	printf("My function: %s >> %s\n", s1, ft_strchr(s1, 'e' + 256));
	printf("Man's function: %s >> %s\n", s1, strchr(s1, 'e' + 256));
	printf("My function: %s >> %s\n", s1, ft_strchr(s1, 1024));
	printf("Man's function: %s >> %s\n", s1, strchr(s1, 1024));
}*/
