/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:21:08 by carolina          #+#    #+#             */
/*   Updated: 2023/03/25 10:19:11 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size * nmemb);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	int	*arr;
	int	*arr2;
	int	i;

	arr = ft_calloc(4, sizeof(int));
	for (i = 0; i < 4; i++)
		printf("arr is %d\n", arr[i]);
	arr2 = calloc(4, sizeof(int));
	for (i = 0; i < 4; i++)
		printf("arr2 is %d\n", arr2[i]);
	free (arr);
	free (arr2);
	return (0);
}*/
