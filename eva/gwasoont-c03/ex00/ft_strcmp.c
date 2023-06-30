/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasoont <gwasoont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:22:47 by gwasoont          #+#    #+#             */
/*   Updated: 2023/06/21 10:55:47 by gwasoont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	output;

	output = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (output);
}
/*int main(void)
{
	char *a = "Hello1";
	char *b = "Hell";

	int c = strcmp(a, b);
	int d = ft_strcmp(a, b);
	printf("the clone one is : %d\n", d);
	printf("IDK but %d", c);
	return (0);
}*/