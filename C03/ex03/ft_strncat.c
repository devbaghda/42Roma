/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:37:12 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/29 00:37:34 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' || j <= nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 1] = '\0';
	return (dest);
}

int main(void)
{
	char dest[100] = {"smth"};
	char str2;
	char *src;
	unsigned int nb;

	src = &str2;
	src = "efgh";
	nb = 2;

	ft_strcat(dest, src, nb);
	return(0);
}

