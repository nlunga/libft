/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:15:43 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/06 14:03:38 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*dest;
	unsigned char	*srcs;
	char			temp[len];

	i = 0;
	dest = (char *)dst;
	srcs = (unsigned char *)src;
	while (i <= len)
	{
		temp[i] = srcs[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}
