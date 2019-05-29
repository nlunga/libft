/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:50:21 by nlunga            #+#    #+#             */
/*   Updated: 2019/05/29 10:00:15 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char i;

	i = c;
	while (*str != i && *str != '\0')
		str++;
	if (*str == i)
		return ((char *)str);
	else
		return (NULL);
}
