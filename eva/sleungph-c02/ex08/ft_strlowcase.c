/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:01:21 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/20 11:43:32 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		i++;
	}
	return (str);
}

/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(void)
{
	char str[] = "Hello, World!";
	ft_strupcase(str);
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
*/