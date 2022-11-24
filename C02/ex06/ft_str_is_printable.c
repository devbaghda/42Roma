/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:55:26 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/24 23:04:18 by davbaghd         ###   ########.fr       */
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
		if (32 <= str[i] && str[i] <= 127)
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
