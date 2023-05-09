/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:49:05 by carolina          #+#    #+#             */
/*   Updated: 2023/04/29 16:10:32 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(char const *s, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i < len)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s || i > (size_t)ft_strlen(s))
	{
		new = (char *)malloc(sizeof(char) * 1);
		if (!new)
			return (0);
		new[0] = '\0';
		return (new);
	}
	new = (char *)malloc(sizeof(char) * ft_len(s + i, len) + 1);
	if (!new)
		return (0);
	if (i < (size_t)ft_strlen(s))
	{
		while (j < len && s[i] != '\0')
			new[j++] = s[i++];
	}
	new[j] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("My function: %s\n", ft_substr(argv[1], 400, 20));
}*/
