#include <stdio.h>
#include <unistd.h>

char *rev_print(char *str)
{
	int i;
	char swap;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);	
		i--;
	}
	write(1, "\n", 1);
	return (str);
}

int main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	return (0);	
}
