/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enardone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:59:37 by enardone          #+#    #+#             */
/*   Updated: 2022/11/20 11:03:31 by enardone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char a);

void	print(int num, char other, char middle)
{
	int	count;

	count = 1;
	while (count <= num)
	{
		if (count == 1 || count == num)
		{
			ft_putchar(other);
		}
		else
		{
			ft_putchar(middle);
		}
		count = count + 1;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	count;

	count = 1;
	if (a > 0 && b > 0)
	{
		while (count <= b)
		{
			if (count == 1 || count == b)
			{
				print(a, 'o', '-');
			}
			else
			{
				print(a, '|', ' ');
			}
			count = count + 1;
		}
	}
}
