/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:05:29 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 12:40:55 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void *ft_rev_print(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0'){
		len++;
	}
	while (len >= 0){
		ft_putchar(str[len]);
		len--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2){
		ft_rev_print(argv[1]);
	}
	return (0);
}
/*void ft_swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
char	*rev_print(char *str)
{
	int len;
	int j;

	len = 0;
	j = 0;
	while (str[len] != '\0'){
		len++;
	}
	while (len > j){
		ft_swap(&str[j], &str[len - 1]);
		j++;
		len--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2){
		printf("%s", ft_rev_print(argv[1]));
	}
	return (0);
}*/
