/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:29:41 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/09 11:30:18 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_print_num(a / 10 + '0');
			ft_print_num(a % 10 + '0');
			write(1, " ", 1);
			ft_print_num(b / 10 + '0');
			ft_print_num(b % 10 + '0');
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
