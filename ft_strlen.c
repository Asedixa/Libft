#include <stdio.h>

size_t ft_strlen(const char *str)
{
	int i;
	
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
	char str[] = "Salut bebew!";
	int length = ft_strlen(str);
	printf("Length of the string: %d\n", length);
	return 0;
}
*/