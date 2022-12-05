/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:47:55 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 12:56:28 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	else
		index = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (index);
}

int	main(void)
{
	int	index;

	index = 5;
	printf("%d", ft_fibonacci(index));
	return (0);
}
