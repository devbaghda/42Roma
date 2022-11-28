/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:19:43 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 22:54:03 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char*s2)
{
	int i; 
	int s;

	s = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != 0))
	{
		i++;
	}
	
	printf("%d\n", s2[i] - s1[i]);
	return (s2[i] - s1[i]);
}


int main()
{
	char c;
	char d;
	char *s1;
	char *s2;

	s1 = &c;
	s2 = &d;

	s1 = "";
	s2 = "a";

	ft_strcmp(s1, s2);

	printf("%d", strcmp(s1, s2));
	return(0);

}
