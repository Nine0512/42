/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:55:12 by kkomasat          #+#    #+#             */
/*   Updated: 2023/06/16 16:45:13 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_value(char *a, char *b, char *c)
{
	char	tmp;

	if (*a > *b)
	{
		tmp = *b;
		*b = *a;
		*a = tmp;
	}
	if (*b > *c)
	{
		tmp = *c;
		*c = *b;
		*b = tmp;
	}
	if (*a > *b)
	{
		tmp = *b;
		*b = *a;
		*a = tmp;
	}
}

void	handle_write(char i, char j, char k)
{
	int		current_value;
	int		swap_value;
	char	a;
	char	b;
	char	c;

	a = i;
	b = j;
	c = k;
	sort_value(&a, &b, &c);
	current_value = 100 * (i - '0') + 10 * (j - '0') + (k - '0');
	swap_value = 100 * (a - '0') + 10 * (b - '0') + (c - '0');
	if (current_value == swap_value)
	{
		if (current_value != 12)
		{
			write(1, ", ", 2);
		}
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i != j && i != k && j != k)
				{
					handle_write(i, j, k);
				}
				++k;
			}
			++j;
		}
		++i;
	}
}
