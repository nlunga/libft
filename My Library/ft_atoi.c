
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		neg;

	result = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == 32)
		str++;
	neg = *str == '-' ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && ft_isdigit(*str))
		result = (result * 10) + (*str++ - '0');
	return (result * neg);
}
