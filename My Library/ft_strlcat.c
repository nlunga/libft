

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	len = 0;
	while (len < size && *dst && *(dst++))
		len++;
	n = size - len;
	if (!n)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			*(dst++) = *src;
			n--;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
