/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enardone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:59:37 by enardone          #+#    #+#             */
/*   Updated: 2022/11/20 11:41:30 by enardone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char a);

void	print(int num, char start, char middle, char end)
{
	int	count;

	count = 1;
	while (count <= num)
	{
		if (count == 1)
		{
			ft_putchar(start);
		}
		else if (count != num)
		{
			ft_putchar(middle);
		}
		else
		{
			ft_putchar(end);
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
			if (count == 1)
			{
				print(a, 'A', 'B', 'C');
			}
			else if (count != b)
			{
				print(a, 'B', ' ', 'B');
			}
			else
			{
				print(a, 'A', 'B', 'C');
			}
			count = count + 1;
		}
	}
}
