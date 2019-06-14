/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:16:59 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/13 16:16:09 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char		i;
// 	unsigned char		*str;
// 	size_t				j;

// 	i = (unsigned char)c;
// 	str = (unsigned char *)s;
// 	j = 0;
// 	while (j < n)
// 	{
// 		if (*(str + j) == i)
// 		{
// 			return ((unsigned char *)s + j);
// 		}
// 		str++;
// 		j++;
// 	}
// 	return (NULL);	
// }


void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					index;
	unsigned const char		*str;

	index = 0;
	str = (unsigned const char *)s;
	while (n)
	{
		if (str[index] == (unsigned char)c)
			return ((char *)&str[index]);
		index++;
		n--;
	}
	return (NULL);
}