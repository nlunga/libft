

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stg;

	stg = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	ft_strcpy(stg, s1);
	ft_strcat(stg, s2);
	return (stg);
}
