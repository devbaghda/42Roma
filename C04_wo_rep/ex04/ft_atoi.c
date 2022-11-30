#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    char arr[] = {};
    char flag;
    int nb;

    i = 0;
    flag = 45;
    while (str)





    while (str[i] == 32 || str[i] == 43 || str[i] == 45 || (48 <= str[i] && str[i] <= 57)
    {
        arr[i] = str[i];
        i++;
    }
    return (nb);
}

int main(int argc, char **argv)
{
    if (argc ==2)
    {
        ft_atoi(argv[1]);
    }
    return (0);
}