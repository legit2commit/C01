void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*

#include <stdio.h>
int	main(void)
{
	int	y = 200;
	int	z = 300;

	ft_swap(&z, &y);
	printf("%d", z);
	return (0);
}
*/
