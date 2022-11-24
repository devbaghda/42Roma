/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:54:03 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/24 12:40:14 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (i <= n - 1)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			str1;
	char			str2;
	char			*dest;
	char			*src;
	unsigned int	n;

	src = &str1;
	dest = &str2;
	n = 1;
	src = "texas";
	ft_strncpy(dest, src, n);
	printf("%s", &dest[0]);
	return (0);
}
