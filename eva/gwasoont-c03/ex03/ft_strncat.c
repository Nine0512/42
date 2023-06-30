/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasoont <gwasoont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:13:50 by gwasoont          #+#    #+#             */
/*   Updated: 2023/06/21 10:56:50 by gwasoont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (a);
}
/*int	main(void)
{
	char	a[20] = "Hello ";
	char	*b = "world!";

printf("\nYour real one is %s\n", strncat(a, b, 3));
	ft_strncat(a, b, 3);
	printf("\nYour Fake function work %s\n\n", a);
	return (0);
}*/