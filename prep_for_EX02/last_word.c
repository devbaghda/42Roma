/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:14:08 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/02 12:22:54 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_last_word(char *str)
{
	int i;
	int fl_1;
	int fl_2;
	int len;

	i = 0;
	fl_1 = 0;
	fl_2 = 0;
	
	while (str[i] != '\0'){
		i++;
	}
	i--;
	len = i;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t')){
			fl_1++;
			i--;
			}
	while (i >= 0 && !(str[i] == ' ' || str[i] == '\t')){
			fl_2++;
			i--;
	}
	i++;
	if (fl_1 > 0){
		while (i <= len - fl_1){
			write(1, &str[i], 1);
			i++;
		}
	}
	else{
		while (i <= len){
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if (argc == 2){
		ft_last_word(argv[1]);
	}
	return (0);
}
