/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:40:44 by davbaghd          #+#    #+#             */
/*   Updated: 2022/12/07 20:08:36 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char*s2)
{	
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_print_params(int argc, char **str)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
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

void	ft_sort_params(int argc, char **str)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_print_params(argc, str);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argc, argv);
	return (0);
}
