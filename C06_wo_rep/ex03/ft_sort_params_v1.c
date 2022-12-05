/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:48:12 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 20:44:28 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


void ft_sorting(int n, char **str)
{
	int i;
	int j;

	i = 1;
	while (i < n) 
	{
		j = 0;
		if (str[i + 1] != 0)
		{
			if (str[i] > str[i + 1])
			{			
				ft_swap(str[i], str[i + 1]);
				j++;
			}
			
		}
		i++;
	}
}

void ft_sort_params(int n, char **str)
{
	int i;
	int j;

	ft_sorting(n, str);

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argc, argv);
	return (0);
}
