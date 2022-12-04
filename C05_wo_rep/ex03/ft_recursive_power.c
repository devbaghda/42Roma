/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:41:03 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/04 20:47:26 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

int main(void)
{
	int nb;
	int power;

	nb = 2;
	power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
