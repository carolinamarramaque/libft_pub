/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:02:06 by carolina          #+#    #+#             */
/*   Updated: 2023/03/25 10:06:38 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strllen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*new;

	i = 0;
	size = ft_strllen(s);
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (0);
	while (i < size)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s >> %s\n", argv[1], ft_strmapi(argv[1], &change));
	return (argc);
}*/
