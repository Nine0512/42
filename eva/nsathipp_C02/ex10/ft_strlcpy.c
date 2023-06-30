/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 20:31:06 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/11 20:34:48 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <string.h>

unsigned int	lenstr(char *src)
{
	unsigned int	len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (lenstr(src) >= n)
	{
		while (src[i] && i + 1 < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < lenstr(src))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*a;

	a = ft_strncpy(dest, src, size);
	return (lenstr(src));
}

// int	main(void)
// {
// 	char	a[10];
// 	char	b[] = "Hello World!";
// 	char	m[10];
// 	char	n[] = "Hello World!";

// 	printf("xx%dxx\n",strlcpy(m,n,10));
// 	printf("%s\n",m);
// 	printf("yy%dyy\n",ft_strlcpy(a, b, 10));
// 	printf("%s\n",a);
// }