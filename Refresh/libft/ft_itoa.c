/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:26:21 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/18 08:27:47 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*fresh;
	int		temp;

	i = ft_intlen(n);
	temp = n;
	if (!(fresh = ft_strnew(i)))
		return (NULL);
	fresh[i] = '\0';
	i--;
	if (temp <= 0)
		temp = temp * -1;
	while (temp >= 10)
	{
		fresh[i] = (temp % 10) + '0';
		temp = temp / 10;
		i--;
	}
	fresh[i] = (temp % 10) + '0';
	i--;
	if (n < 0)
	{
		fresh[i] = '-';
	}
	return (fresh);
}
