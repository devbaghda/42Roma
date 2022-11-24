/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:00:57 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/24 22:13:00 by davbaghd         ###   ########.fr       */
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
		if (48 <= str[i] && str[i] <= 57)
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
	str = "11111";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
