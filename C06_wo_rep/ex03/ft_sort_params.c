/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:32:24 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/05 20:41:50 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_params(int n, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < n)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argc, argv);
	return (0);
}
