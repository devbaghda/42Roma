/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:02:08 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/06 16:25:21 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
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
	return(arr);
}

int main(void)
{
	int min;
	int max;
	int i;

	min = -15;
	max = 0;

	i = 0;
	while (i < max - min)
	{
		printf("%d, ", ft_range(min, max)[i]);
		i++;
	}	
	return (0);
}
