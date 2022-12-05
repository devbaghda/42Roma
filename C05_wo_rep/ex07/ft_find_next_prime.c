/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:54:33 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 13:03:41 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 1;
	if (nb == 0 || nb == 1 || nb == -2147483648)
		return (0);
	if (nb < 0)
		nb *= -1;
	if (nb == 2)
		return (1);
	if (nb > 2)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				flag = 0;
				break ;
			}
			i++;
		}
	}
	return (flag);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) != 1)
		{
			nb += i;
			i++;
		}
	}
	return (nb);
}

int	main(void)
{
	int	nb;

	nb = -20;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
