/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:16:03 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/29 22:27:58 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_len(char *str)
{
	int i; 

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_str_len(argv[1]));
	}
	return(0);
}
