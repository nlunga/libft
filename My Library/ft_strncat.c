

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s;

	s = s1;
	while (*s1)
		s1++;
	while (*s2 && (int)n-- > 0)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s);
}
