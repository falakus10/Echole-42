#include <stdio.h>

int	ft_strlen(char *str)
{
	int lenght;
	int i;

	i = 0;
	lenght = 0;

	while(str[i] != '\0')
	{
		lenght = lenght + 1;
		i++;
	}
	return (lenght);
}

int main()
{
	char *metin;
	int string_lenght;

	metin = "hello World";
	string_lenght = ft_strlen(metin);
	printf("%d", string_lenght);
}
