/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:16:59 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/06 13:47:55 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		i;
	const char			*str;
	size_t				j;

	i = (unsigned char)c;
	j = 0;
	str = (const char *)s;
	while (n--)
	{
		if (str[j] == i)
			return ((char *)str);
		else
			j++;
	}
	return (NULL);
}
