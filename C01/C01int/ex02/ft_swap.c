#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x;
	int y;

	x = 45;
	y = 72;

	ft_swap(&x, &y);

	printf("x = %d,y = %d", x, y);

}
