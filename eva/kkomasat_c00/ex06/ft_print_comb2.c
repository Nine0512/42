/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:29:23 by kkomasat          #+#    #+#             */
/*   Updated: 2023/06/19 12:40:48 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	conv2char(char arr[2], int N)
{
	int	index;

	index = 0;
	while (N)
	{
		if (N % 10 != 0)
			arr[index] = N % 10 + '0';
		else
			arr[index] = '0';
		N /= 10;
		++index;
	}
}

void	handle_write1(int i)
{
	char	arr1[2];

	conv2char(arr1, i);
	if (i == 0)
	{
		write(1, "00", 2);
	}
	else if (i < 10)
	{
		write(1, "0", 1);
		write(1, &arr1[0], 1);
	}
	else
	{
		write(1, &arr1[1], 1);
		write(1, &arr1[0], 1);
	}
	write(1, " ", 1);
}

void	handle_write2(int i, int j)
{
	char	arr2[2];

	conv2char(arr2, j);
	if (j < 10)
	{
		write(1, "0", 1);
		write(1, &arr2[0], 1);
	}	
	else
	{
		write(1, &arr2[1], 1);
		write(1, &arr2[0], 1);
	}
	if (i == 98 && j == 99)
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			handle_write1(i);
			handle_write2(i, j);
			++j;
		}
		++i;
	}
}
