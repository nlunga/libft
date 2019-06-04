#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *fresh;

	i = 0;
	if (!s || !(fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
