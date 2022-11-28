/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:28:58 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 19:31:46 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (i <= size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (dest[l] != '\0')
	{
		l++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	c;
	char	*dest;

	dest = &c;
	if (argc == 2)
	{
		ft_strlcpy(dest, argv[1], 2);
	}
	return (0);
}
