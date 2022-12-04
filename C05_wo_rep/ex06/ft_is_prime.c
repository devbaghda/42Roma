/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:26:01 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/04 22:53:42 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int flag;

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
		while (i <= nb/2)	
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

int main(void)
{
	int nb;

	nb = -29;
	printf("%d", ft_is_prime(nb));
	return (0);
}
