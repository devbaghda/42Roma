/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:54:16 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 12:54:18 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	powered;

	powered = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		powered *= nb;
		power--;
	}
	return (powered);
}

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
