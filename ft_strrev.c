/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:22:46 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 14:58:45 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

char *ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[len] != '\0'){
		len++;
	}

	while (len >= i){
		ft_swap(&str[i], &str[len - 1]);
		i++;
		len--;
	}
	return (str);
}

int main(int argc, char **argv)
{
	if (argc == 2){
		printf("%s", ft_strrev(argv[1]));
	}
	return (0);
}
