/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:39:50 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/24 00:37:40 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		a = &tab[i];
		b = &tab[size - 1 - i];
		ft_swap(a, b);
		i++;
	}
}
