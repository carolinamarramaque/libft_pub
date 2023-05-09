/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:14:09 by carolina          #+#    #+#             */
/*   Updated: 2023/03/14 18:19:55 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>

int	main()
{
	char	str[25] = "This is a test string!";

	printf("%s\n", str);
	ft_bzero(str + 3, 25 *sizeof(char));
	printf("%s\n", str);
	return (0);
}*/
