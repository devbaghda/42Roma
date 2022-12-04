/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:22:31 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/04 18:54:37 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_type(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	if (c == 43 || c == 45)
		return (2);
	if (48 <= c && c <= 57)
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] != '\0')
	{
		if (ft_type(str[i - 1]) > ft_type(str[i]))
			return (nb);
		if (ft_type(str[i]) == 3)
		{
			nb *= 10;
			nb += str[i] - 48;
		}
		if (ft_type(str[i]) == 2)
		{
			if (str[i] == 45)
				sign *= -1;
		}
		i++;
	}
	nb *= sign;
	return (nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	return (0);
}
