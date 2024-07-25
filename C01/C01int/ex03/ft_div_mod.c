#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div  = a/b;
	*mod = a % b;
}

int main()
{
	int division;
	int mod_numbers;
	int x;
	int y;

	x = 49;
	y = 7;

	ft_div_mod(x, y, &division, &mod_numbers);
	printf(" %d, %d", division, mod_numbers);
}
