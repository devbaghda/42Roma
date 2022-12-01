/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:10:35 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 22:28:21 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_is_double(int i, char *str)
{
	int j;
	
	j = i;
	while(j > 0){
			if (str[j - 1] == str[i]){
			return (0);
			}
			j--;
	}
	return(1);
}

int ft_is_present(char c, char *str)
{
	int i;
	
	i = 0;
	while (str[i] != 0){
		if (c == str[i]){
			return(1);
		}
		i ++;
	}
	return (0);
}

void ft_inter(char *str_1, char *str_2)
{
	int	i;
	char c;
		
	i = 0;
	while (str_1[i] != '\0'){
		if (ft_is_double(i, str_1) == 1){
			c = str_1[i];
			if(ft_is_present(c, str_2) == 1){
				write(1, &c, 1);
			}
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
