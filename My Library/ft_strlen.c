

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		cmp;

	cmp = 0;
	while (s[cmp] != '\0')
		cmp++;
	return (cmp);
}
