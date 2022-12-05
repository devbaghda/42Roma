/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:19:38 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 20:31:08 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_params(int n, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (n > 1)
	{
		j = 0;
		while (str[n - 1][j] != '\0')
		{
			write(1, &str[n - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		n--;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rev_params(argc, argv);
	return (0);
}
