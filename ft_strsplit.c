/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:27:52 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/11 12:24:38 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_words(char const *s, char c)
{
	int			i;
	size_t		size;

	i = 0;
	size = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			size++;
		}
	}
	return (size);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**fresh;
	size_t		size;
	int			i;
	int			start;

	if (!s || !(fresh = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1))))
		return (NULL);
	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			fresh[size++] = ft_strsub(s, start, i - start);
		}
	}
	fresh[size] = NULL;
	return (fresh);
}
