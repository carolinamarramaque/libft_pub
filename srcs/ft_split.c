/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:59:00 by carolina          #+#    #+#             */
/*   Updated: 2023/03/23 10:47:12 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_new_word(char *word, char const *str, int size, int start)
{
	int	i;

	i = 0;
	word = (char *)malloc(sizeof(char) * size + 1);
	while (i < size)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_continue_split(char **split, char const *str, char c)
{
	int	count;
	int	i;
	int	k;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		k = i;
		while (str[i] != '\0' && str[i] == c)
		{
			i++;
			k++;
		}
		while (str[i] != '\0' && str[i] != c)
			i++;
		if (i > k)
		{
			split[count] = ft_new_word(split[count], str, i - k, k);
			count++;
		}
	}
	split[count] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			words;

	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	split = ft_continue_split(split, s, c);
	return (split);
}
/*
int	main()
{
	int	i;
	char	str[] = "This is a test string";
	char	c;
	char	**split;

	c = 32;
	split = ft_split(str, c);
	i = 0;
	while (i < 5)
	{
		printf("%s\n", split[i]);
		i++;
	}
}*/
