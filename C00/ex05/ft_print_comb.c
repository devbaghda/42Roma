/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:21:15 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/22 09:20:28 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = 48;
	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				ft_putchar(n1, n2, n3);
				if (n1 < 55)
				{
					write(1, ", ", 2);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
