/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:54:03 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 19:06:17 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		src++;
		dest++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str1;
	char	str2;
	char	*dest;
	char	*src;

	src = &str1;
	dest = &str2;
	src = "texas";
	ft_strcpy(dest, src);
	printf("%s", &dest[0]);
	return (0);
}
