/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:59:29 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/21 12:00:07 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	a[] = "small";
	char	b[7];

	ft_strcpy(b, a);
	int	i = 0;
	while (b[i] != '\0')
	{
		ft_putchar(b[i]);
	i++;
	}
	ft_putchar('\n');
	return (0);
}
*/