/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:39:23 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 12:22:20 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0'){
		i++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	if (argc == 2){
		printf("%d", ft_strlen(argv[1]));			
	}
	return (0);
}
