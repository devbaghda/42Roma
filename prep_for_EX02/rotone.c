/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:46:32 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 17:09:56 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0'){
		if (('a' <= str[i] && str[i] <= 'y')||('A' <= str[i] && str[i] <= 'Y')){
			str[i] += 1 ;
		}
		if (str[i] == 'z' || str[i] == 'Z'){
			str[i] -= 25;
		}
		write(1, &str[i], 1);
		i++;
	}
}


int main (int argc, char **argv)
{
	if (argc == 2){
		rotone(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
