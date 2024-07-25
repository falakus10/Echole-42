#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int digit;

	i = 0;
	while(i < size - 1)
	{
		if(tab[i] > tab[i + 1])
		{
			digit = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = digit;
			i = 0;
		}
		else 
			i++;
	}

}

int main()
{
	int tab[10] = {6, 1, 3, 4, 2, 5, 56,4, 54, 66};
	int size = 10;
	ft_sort_int_tab(tab, 10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	
}
