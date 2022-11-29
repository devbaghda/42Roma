/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:33:18 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/29 22:50:35 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	putstr(char *str)

{
	while (*str)
	{
		write(1, str, 1);	
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		putstr(argv[1]);
	}
}
