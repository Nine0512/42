/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasoont <gwasoont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:03:47 by gwasoont          #+#    #+#             */
/*   Updated: 2023/06/21 10:56:16 by gwasoont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
/*int	main(void)
{
	char	a[20] = "Hello ";
	char	b[] = "world!";

	printf("\nYour real one is %s\n", strcat(a, b));
	ft_strcat(a, b);
	printf("\nYour Fake function work %s\n\n", a);
	return (0);
}*/