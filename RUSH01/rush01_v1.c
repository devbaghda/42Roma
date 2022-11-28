#include <stdio.h>

int nb_builder(void)
{
	int a;
	int b;
	int c;
	int d;
	int numb;
		
	a = 1;
	while (a <= 4)
	{
		b = 1;
		while (b <= 4)
		{	
			c = 1;
			while (c <= 4)
			{
				d = 1;			
				while (d <= 4)
				{
					if (d != c && d != b && d != a && c != a && c != b && b != a)
					{
						numb = a * 1000 + b * 100 + c * 10 + d;
						/*printf("%d\n", numb);*/
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	
	return (numb);
}

void func(void);
{
		
}
