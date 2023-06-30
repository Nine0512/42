/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:48:34 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/12 12:57:21 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (*str >= ' ' && *str <= '~')
		return (1);
	else
		return (0);
}

void	convert(char *y, char *x)
{
	if (*y >= 0 && *y <= 9)
		*y += '0';
	else
		*y += 87;
	if (*x >= 0 && *x <= 9)
		*x += '0';
	else
		*x += 87;
}

void	ft_putstr_non_printable(char *str)
{
	char	y;
	char	x;

	while (*str != '\0')
	{
		if (ft_str_is_printable(str))
		{
			write (1, str, 1);
		}
		else
		{
			write (1, "\\", 1);
			y = *str / 16;
			x = *str % 16;
			convert(&y, &x);
			write (1, &y, 1);
			write (1, &x, 1);
		}
		str++;
	}
}

// int main()
// {
// 	char a[] = "Coucou\ntu vas bien";
// 	ft_putstr_non_printable(a);
// }