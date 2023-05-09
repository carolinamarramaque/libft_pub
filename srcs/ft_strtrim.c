/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:01:17 by carolina          #+#    #+#             */
/*   Updated: 2023/04/29 13:58:06 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strllen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*new;

	i = 0;
	while (s1[i] != '\0' && check_set(s1[i], set) == 1)
		i++;
	size = ft_strllen(s1);
	while (size > 0 && check_set(s1[size - 1], set) == 1)
		size--;
	if (size < i)
		size = i;
	new = (char *)malloc(sizeof(char) * (size - i) + 1);
	if (!new)
		return (0);
	j = 0;
	while (i < size)
		new[j++] = s1[i++];
	new[j] = '\0';
	return (new);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (argc);
}*/
