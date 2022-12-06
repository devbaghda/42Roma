/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:57:14 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/06 17:55:41 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int len;
	int i;

	len = max - min;
	if (len <= 0)
		return (0);
	arr = (int*)malloc(len * sizeof(int));
	if (!(arr))
		return (0);
	i = 0;
	while (i <= len)
	{
		arr[i] = min + i;
		i++;
	}
	range = &arr;
	return(len);
}

int main(void)
{
	int min;
	int max;
	int **range;

	min = -15;
	max = 0;
	printf("%d", ft_ultimate_range(range, min, max));

	return (0);
}

