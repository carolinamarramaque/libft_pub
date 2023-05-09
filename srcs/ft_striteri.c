/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolina <carolina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:50:22 by carolina          #+#    #+#             */
/*   Updated: 2023/04/29 14:37:17 by carolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}

/*
void	annex(unsigned int i, char *str)
{
	if (str[i] >= '0' && str[i] <= '9')
		str[i] = '#';
}

int	main(int argc, char **argv)
{
	ft_striteri(argv[1], &annex);
	printf("%s\n", argv[1]);
	return (argc);
}*/
