/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:43:05 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 16:39:58 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_decapitalize(char *str)
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
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_decapitalize(str);
	i = 0;
	while (str[i] != '\0')
	{
		if ((0 < str[i] && str[i] <= 47) || (91 <= str[i] && str[i] <= 96))
		{
			if (97 <= str[i + 1] && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}	
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
