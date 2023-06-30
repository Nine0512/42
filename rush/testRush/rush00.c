/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:00:05 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/12 20:47:35 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ruch(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == y)
				|| (i == x && j == 1) || (i == x && j == y))
				ft_putchar('o');
			else if (i == 1 && i == x)
				ft_putchar('-');
			else if (j == 1 && j == y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
