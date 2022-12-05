/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:33:47 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 21:27:41 by davbaghd         ###   ########.fr       */
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
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
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
