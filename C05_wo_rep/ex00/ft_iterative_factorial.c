/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:14:41 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 12:51:10 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = 1;
	i = 0;
	while (i <= nb - 1)
	{
		i++;
		factorial *= i;
	}
	return (factorial);
}

int	main(void)
{
	int	nb;

	nb = 3;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
