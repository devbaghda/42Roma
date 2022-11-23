/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:48:09 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/23 00:26:17 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_pow(int n)
{
	int pow_10;

	pow_10 = 1;
	while (n >= 1)
	{
		pow_10 *= 10;
		n--;
	}
	return (pow_10);
}

void ft_char_converter(int nb)
{
	int pow_10;

	if (nb > 9)
	{
		ft_char_converter(nb / 10);
		nb %= 10;
	}
	ft_putchar('0' + nb);
}

void	ft_print_combn(int n)
{
	int	nb;
	int	pow_10;
	char curr_c;
	int cnt;

	pow_10 = ft_pow(n);
	nb = pow_10/10 + 1;
	while (pow_10/10 < nb && nb < pow_10)
	{
		ft_char_converter(nb);
		write(1, ", ", 2);
		nb++;
	}
}
	
int main(void)
{
	ft_print_combn(3);
	return (0);
}
