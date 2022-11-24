/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:24:52 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/24 22:32:00 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	i;

	i = 0;
	if (!(*str))
	{
		flag = 1;
	}
	while (*str)
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}

int	main(void)
{	
	char	c;
	char	*str;

	str = &c;
	str = "aaaaaa";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
