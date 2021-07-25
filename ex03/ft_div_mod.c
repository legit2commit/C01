#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*

int	main(void)
{
	int	a = 5;
	int	b = 2;
	int	y;
	int	x;

	ft_div_mod(a, b, &y, &x);
	printf("div is: %d mod is: %d", y, x);
	return (0);
}
*/
