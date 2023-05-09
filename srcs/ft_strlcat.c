/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:08:28 by carolina          #+#    #+#             */
/*   Updated: 2023/03/21 12:37:11 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	i = 0;
	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (d_len >= size)
		return (size + s_len);
	if (size > 0 && d_len < (size - 1))
	{
		while (src[i] != '\0' && d_len + i < size - 1)
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[d_len + i] = '\0';
	}
	return (d_len + s_len);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[20] = "Hello ";
	char	s2[20] = "World!";

	printf("%s = %ld\n", s1, ft_strlcat(s1, s2, 0));
	printf("%s = %ld\n", s1, ft_strlcat(s1, s2, 2));
	printf("%s = %ld\n", s1, ft_strlcat(s1, s2, 20));
}*/
