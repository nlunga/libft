/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:30:23 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/03 15:28:30 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && src[i] != '\0' && dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len && dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
