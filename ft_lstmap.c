/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:33:29 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/15 12:44:14 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *fresh;
	if (!(fresh = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	fresh = f(lst);
	while (lst)
	{
		fresh->next = f(lst->next);
		fresh = fresh->next;
		lst = lst->next;
	}
	return (fresh);
}
