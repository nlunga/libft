/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchnreplace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:01:03 by nlunga            #+#    #+#             */
/*   Updated: 2019/07/05 19:07:29 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_searchnreplace(char **str, char gt, char ch)
{
	char	*pstr;

	if ((pstr = ft_strchr(*str, gt)) == NULL)
		return (NULL);
	*pstr = ch;
	return(pstr);
}
