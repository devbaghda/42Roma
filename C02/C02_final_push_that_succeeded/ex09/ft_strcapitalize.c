/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:43:05 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/04 13:06:35 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_decapitalize(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
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
	int	switcher;

	ft_decapitalize(str);
	i = 0;
	switcher = 1;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (switcher == 1)
				str[i] -= 32;
			switcher = 0;
		}
		else if ('0' <= str[i] && str[i] <= '9')
			switcher = 0;
		else
			switcher = 1;
		i++;
	}
	return (str);
}
