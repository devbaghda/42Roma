/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:43:05 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 12:26:21 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	str[i] -= 32;
	while (str[i] != '\0')
	{		
		if (str[i] == 32 && str[i + 1] != '\0')
		{
			str[i + 1] -= 32;
		}	
		i++;
	}	
	printf("%s", str);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strcapitalize(argv[1]);
	}
	return (0);
}
