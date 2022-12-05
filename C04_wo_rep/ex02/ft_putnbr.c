/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:51:17 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 12:26:35 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (-2147483648 <= nb && nb <= 2147483647)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
			if (nb == -2147483648)
			{
				ft_putchar('2');
				nb = 147483648;
			}
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		ft_putchar('0' + nb);
	}
}

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
