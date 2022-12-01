/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff-a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:30:24 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 11:39:04 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

void aff_a(char *str)
{
	int i;
	int flag;

	i = 0;
	while (str[i] != '\0'){
		if (str[i] == 97){
			ft_putchar('a');
			flag = 1;
		}
		i++;
	}
	if (flag == 0){
		write(1, "\n", 1);
	}
}

int main(int argc, char ** argv)
{
	(void)argv;
	if (argc == 2){
		aff_a(argv[1]);	
		//ft_putchar('a');
	}
	return (0);
}
