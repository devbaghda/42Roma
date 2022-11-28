/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:07:16 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 11:35:01 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strupcase(argv[1]);
	}	
	return (0);
}
