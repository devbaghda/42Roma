/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:42:09 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/30 15:06:42 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (i + j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 1] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	char			dest[20] = {"smth"};
	char			str2;
	char			*src;
	unsigned int	size;

	src = &str2;
	src = "efasdfh";
	size = 10;
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
//    printf("%lu\n", strlcat(dest, src, size));
//    printf("%s\n", dest);
	return (0);
}
