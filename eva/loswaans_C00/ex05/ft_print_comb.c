/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaans <loswaans@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:11:02 by loswaans          #+#    #+#             */
/*   Updated: 2023/06/09 14:11:34 by loswaans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_seperator(void)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write (1, &comma, 1);
	write (1, &space, 1);
}

void	write_xyz_comb(int x, int y, int z)
{
	char	x_char;
	char	y_char;
	char	z_char;

	x_char = x + '0';
	y_char = y + '0';
	z_char = z + '0';
	write(1, &x_char, 1);
	write(1, &y_char, 1);
	write(1, &z_char, 1);
	if (!(x == 7 && y == 8 && z == 9))
	{
		write_seperator();
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				write_xyz_comb(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
