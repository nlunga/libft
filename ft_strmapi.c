#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int i;
	char *fresh;

	i = 0;
	if (!s || !(fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
