void	ft_ultimate_div_mod(int	*a, int *b)
{
	int	x;

	x = *a;
	 *a = *a / *b;
	 *b = x % *b;
}
/*

#include <stdio.h>

int	main(void)
{
	int d = 5;
	int e = 2;

	ft_ultimate_div_mod(&d, &e);
	printf("%d %d", d, e);
	return (0);
}
*/
