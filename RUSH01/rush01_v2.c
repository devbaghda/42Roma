#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*builds a 4 digit array*/
int nb_builder(void)
{
	int a;
	int b;
	int c;
	int d;
	int i;
	int *arr;

	arr = (int *)malloc(16);
	i = 0;
	while (i <= 16)
	{
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
						if (a + b + c + d != 10)
						{
							arr[i] = a;
							arr[i + 1] = b;
							arr[i + 2] = c;
							arr[i + 3] = d;				
							/*numb = a * 1000 + b * 100 + c * 10 + d;
							*printf("%d\n", numb);*/
						}
						d++;
					}
					c++;
				}
				b++;
			}
			a++;
		}
		i += 4;
		while (i == 16)
		{
			if (arr[i] + arr[i -4] + arr[i - 8] +  arr[i - 12] != 10)
			{
				i = 0;
					}
		}
	}
		
	return(arr);
}


/*cheks if the provided char is in the string or not*/
int checker(char s, char *arr)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (*arr[i] != "\n")
	{
		if s == arr[i]
			{
				flag = 1;
				break ;
			}
		i++;
	}
	return (flag);
}







/*arr_inp - array of input numbers with spaces cleaned
 * arr_1r, arr_2r, arr_3r, arr_4r - array of 1, 2, 3, 4 rows accordingly*/

int main(int argc, char **argv)
{
	int n; 
	int i;
	int j;
	char *c;
	flag = 0;
	
	i = 0;
	j = 0;
	n = argc;
	char *arr = (char *)malloc(sizeof(argv[1])/2);
	
	if (argc == 2)
	{
		while (i <= 32)
		{
			if (argv[1][i] != 32)
			{
				arr[j] = argv[1][i]; 
				j++;
			}
			i++;
		}
	}


	/*flag = func();*/

	if (flag = 0)
	{
		write(1, "Error", 1);
		write(1, "\n", 1);
	}

	


	/*printf("%s",arr);*/
	
	return (0);

}
