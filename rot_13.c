/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:18:43 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 16:45:50 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0'){
		if (( 'n'<= str[i] && str[i] <= 'z')||('N' <= str[i] && str[i] <= 'Z')){
				str[i] -= 13;
			}
		if (( 'a'<= str[i] && str[i] <= 'm')||('A' <= str[i] && str[i] <= 'M')){
				str[i] += 13;
			}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2){
		rot_13(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
