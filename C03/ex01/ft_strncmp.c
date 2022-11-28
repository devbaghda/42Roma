/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davbaghd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:54:50 by davbaghd          #+#    #+#             */
/*   Updated: 2022/11/28 23:23:19 by davbaghd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
unsigned int i;

	i = 0;
	while (i < n - 1 && (s2[i] !='\0' || s1[i] != '\0') && s2[i] == s1[i])
			{
				i++;
			}
			return (s1[i] - s2[i]);	
}	

int main(void)
{
	unsigned int n;
	char str1;
	char str2;
	char *s1;
	char *s2;

	s1 = &str1;
	s2 = &str2;

	s1 = "asdsafr";
	s2 = "gerdas";
	n = 40;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));

	return (0);


}
