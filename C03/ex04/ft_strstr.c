/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 00:38:54 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/30 15:03:51 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!(*to_find))
	{
		return (str);
	}
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i - j]);
			}
			j++;
			i++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strstr(argv[1], argv[2]));
		printf("%s", strstr(argv[1], argv[2]));
	}
	return (0);
}
