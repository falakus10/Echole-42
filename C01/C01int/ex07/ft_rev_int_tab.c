#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int digit;

	i = 0;
	while (i <(size / 2))
	{
		digit = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size -1 -i] = digit;
		i++;
	}
}

int main()
{
	
	int i;

	int tab[9] = {0, 1, 2, 3, 4, 5, 55,67,44};
	int size = 9;

	ft_rev_int_tab(tab ,size);
	i = 0;
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	} 
}
