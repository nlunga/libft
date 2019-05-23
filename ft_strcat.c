/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:37:10 by nlunga            #+#    #+#             */
/*   Updated: 2019/05/23 12:47:26 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict to, const char *restrict from)
{
	int i;

	i = 0;
	while (to[i])
		i++;
	while (from[i])
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
	return (to);
}
