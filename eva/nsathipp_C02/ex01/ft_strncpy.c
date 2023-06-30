/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:47:34 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/11 15:04:06 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*x;
// 	char	*y;
// 	char	m[] = "Wo612345";
// 	char	n[] = "Hello";
// 	char	a[] = "Wo612345";
// 	char	b[] = "Hello";

// 	strncpy(m, n, 3);
// 	printf("%s\n", m);
// 	x = ft_strncpy(a, b, 3);
// 	printf("%s",x);
// }
