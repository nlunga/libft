#include <stdio.h>
#include "libft.h"

int main(void)
{
	char test1[50] = "I love pie";
	int test2 = 6055;
	float test3 = 887.5998;
	double test4 = 48786.8488;
	printf("%s\n", memset(test1 + 1, '$', 6));
	printf("%i\n", memset(test2 + 2, '$', 1));
	printf("%f\n", memset(test3 + 3, '$', 3));
	printf("%f\n\n", memset(test4 + 4, '$', 6));

	printf("%s\n", ft_memset(test1 + 1, '$', 6));
	printf("%i\n", ft_memset(test2 + 2, '$', 1));
	printf("%f\n", ft_memset(test3 + 3, '$', 3));
	printf("%f\n", ft_memset(test4 + 4, '$', 6));
	return (0);
}
