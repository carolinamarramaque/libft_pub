/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:33:10 by carolina          #+#    #+#             */
/*   Updated: 2023/03/14 16:09:17 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char	str[25] = "This is a test string!";

	printf("%s\n", str);
	ft_memset(str + 3, '.', 5 * sizeof(char));
	printf("%s\n", str);
	return (0);
}*/	
