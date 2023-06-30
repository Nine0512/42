/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaans <loswaans@42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:32:05 by loswaans          #+#    #+#             */
/*   Updated: 2023/06/09 14:28:02 by loswaans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nb(int nb)
{
	my_putchar((char)(nb / 10 + '0'));
	my_putchar((char)(nb % 10 + '0'));
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 < 100)
	{
		nb2 = nb1 + 1;
		while (nb2 < 100)
		{
			print_nb(nb1);
			my_putchar(' ');
			print_nb(nb2);
			if (!(nb1 == 98 && nb2 == 99))
			{
				my_putchar(',');
				my_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}
