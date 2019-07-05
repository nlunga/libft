

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*fct;

	fct = NULL;
	while (*s)
	{
		if (*s == (char)c)
			fct = (char *)s;
		s++;
	}
	if (*s == (char)c)
		fct = (char *)s;
	return (fct);
}
