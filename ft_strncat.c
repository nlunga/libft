/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:18:19 by nlunga            #+#    #+#             */
/*   Updated: 2019/05/27 09:48:04 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *to, const char *from, size_t n)
{
	size_t i;

	i = 0;
	while (to[i])
		i++;
	while (i < n && from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (to);
}
