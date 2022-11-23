/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:22:41 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/22 15:30:47 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_counter(int nb)
{
	int	cnt;

	cnt = 0;
		while (nb > 9)
	{
		cnt++;
		nb = nb / 10;
	}
	return (cnt);
}

int	ft_power(int cnt)
{
	int	pow_10;
	
	pow_10 = 10;
	while (cnt > 1)
	{
		pow_10 = pow_10 * 10;
		cnt--;
	}
	return (pow_10);
}

void	ft_putnbr(int nb)
{
	char	c;
	int		cnt;
	int		pow_10;

	if (-2147483647 <= nb && nb <= 2147483647)
	{
		cnt = ft_counter(nb);
		pow_10 = ft_power(cnt);
		while (nb > 9)
		{
			ft_putchar('0' + nb / pow_10);
			nb = nb - (nb / pow_10) * pow_10;
			cnt--;
			pow_10 = pow_10 / 10;
		}
		ft_putchar('0' + nb);
	}
}

int	main(void)
{
	ft_putnbr(214);
	return (0);
}
