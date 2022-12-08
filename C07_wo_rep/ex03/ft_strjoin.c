/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:20:37 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/08 19:11:46 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char ft_strncat(char *dest, char *src, n)
{
	int i;
	int j;
	
	i = ft_strlen(dest); 
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		if (j == n)
			break ;
		i++;	
	}
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *arr;
	int i;
	int len;

	arr = (char*)malloc(sizeof(strs));
	if (!strs)
		return (0);
	
	i = 0;
	while (i < size)
	{
		len = ft_strlen(strs[i]);
		ft_strncat(arr, strs[i], len);
		i++;
		if (i == size)
			break ;
		len = ft_strlen(sep);
		ft_strncat(arr, sep, len);
	}
	return (arr);
}


int main(void)
{
	char **strs;
	char *sep;
	int size;

	strs[0] = "abc";
	strs[1] = "1234";
	strs[2] = "dfg";


	//strs[0] = "You'd";
	//strs[1] = "better";
	//strs[2] = "DON'T";
	//strs[3] = "concatenate";
	//strs[4] = "these";
	//strs[5] = "strings";
	//strs[6] = "never";
	//strs[7] = "ever!";

	sep = "_________";
	size = 3;
	//ft_strjoin(size, strs, sep);
	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}
