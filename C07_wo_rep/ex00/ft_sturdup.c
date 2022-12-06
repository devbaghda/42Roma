/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sturdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:56:31 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 21:14:50 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *str)
{
	char *str_copy;

	str_copy = (char*)malloc(sizeof(str));
	if (!str_copy)
		return (0);
	str_copy = str;
	return(str_copy);
}

int main (int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strdup(argv[1]));
	return (0);
}
