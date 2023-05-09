/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:11:06 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 13:19:01 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < 0 || s2[i] < 0)
				return ((s1[i] - s2[i]) * -1);
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	size_t	n = 5;
	printf("My function:%d\n", ft_strncmp(argv[1], argv[2], n));
	printf("Man's function:%d\n", strncmp(argv[1], argv[2], n));
	
	printf("My function:%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("Man's function:%d\n", strncmp("test\200", "test\0", 6));

	printf("My function:%d\n", ft_strncmp("abcdef", "abc\375xx", 5));
	printf("Man's function:%d\n", strncmp("abcdef", "abc\375xx", 5));
}*/
