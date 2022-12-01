/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:52:32 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/01 12:22:05 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int num1;
	int num2;
	int *a;
	int *b;

	a = &num1;
	b = &num2;
	*a = 21;
	*b = 32;
	printf("%d %d\n", *a, *b);
	ft_swap(a, b);
	printf("%d %d\n", *a, *b);
	return (0);
}

