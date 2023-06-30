/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:41:34 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/11 13:41:37 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}

// int main(void)
// {
// 	char a[] = "Hello";
// 	char b[] = "ILOVE";
// 	char x[] = "Hello";
// 	char y[] = "ILOVE";
// 	printf("%s\n", strcpy(x,y));
// 	printf("%s", ft_strcpy(a, b));
// }