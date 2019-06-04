/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:22:02 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/04 14:41:22 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*p;
	size_t		i;

	i = 0;
	if (!(p = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		p[i++] = '\0';
	return (p);
}
