/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlunga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 09:18:22 by nlunga            #+#    #+#             */
/*   Updated: 2019/06/21 12:17:33 by nlunga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef char* str_t;
typedef char** strArray_t;

void	changeme(char *c)
{	
	//*c = ft_toupper(*c);
	*c = ~(*c << 1);
}

void	changeback(char *c)
{
}

int		main(void)
{
	str_t		findme = ft_strdup("<tag>\t\t\t\v\v\v\b\t Find me please... \t\t\b\v\v</tag>");
	strArray_t	on = ft_strsplit(findme, '\t');
	str_t		found;
	int		i = 0;
	while (on[i])
		i++;
	str_t		ono = on[2];
	ft_strsplit(on[i], '\v');
	found = ft_strrchr(ono, 'F');
	printf("%s", found);
	
	str_t		splitme = ft_strdup("I ama string please splitme");
	strArray_t	iamsplit;
	
	iamsplit = ft_strsplit(splitme, ' ');
	// striter on iamsplit 4th one, Uppercase, << 1,
	int j = 0;
	while (iamsplit[j])
	{
		printf("%d) %s\n", j, iamsplit[j]);
		j++;
	}
	str_t uper = iamsplit[3];
	ft_striter(uper, changeme);
	ft_putendl(uper);
	ft_putnbr(uper[0]);
	ft_putendl("");
	ft_striter(uper, changeback);
	ft_putendl(uper);
	ft_putnbr(uper[0]);
	//ft_putnbr(1 << 1);
	return 0;
}
