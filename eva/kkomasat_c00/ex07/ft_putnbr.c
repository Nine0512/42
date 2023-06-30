/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkomasat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:47:25 by kkomasat          #+#    #+#             */
/*   Updated: 2023/06/16 16:46:38 by kkomasat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digit(int tmp_num)
{
	int	digit;

	digit = 0;
	while (tmp_num)
	{
		digit++;
		tmp_num /= 10;
	}
	return (digit);
}

int	tmp_var(int nb, int *flag)
{
	int	tmp_num;

	if (nb > 0)
	{
		tmp_num = nb;
		*flag = 0;
	}
	else if (nb == 0)
	{
		tmp_num = 0;
		*flag = 0;
	}
	else
	{
		tmp_num = nb * -1;
		*flag = 1;
	}
	return (tmp_num);
}

void	handle_write(int index, int nb, int flag, char arr[11])
{
	int	tmp_num;

	tmp_num = tmp_var(nb, &flag);
	if (tmp_num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (flag)
		{
			write(1, "-", 1);
		}
		while (index > 0)
		{
			write(1, &arr[index - 1], 1);
			--index;
		}
	}
}

void	conv2char(int nb, int flag, char *arr)
{
	int	tmp_num;
	int	index;

	tmp_num = tmp_var(nb, &flag);
	index = 0;
	while (tmp_num)
	{
		if (tmp_num % 10 != 0)
		{
			arr[index] = tmp_num % 10 + '0';
		}
		else
		{
			arr[index] = '0';
		}
		tmp_num /= 10;
		++index;
	}
}

void	ft_putnbr(int nb)

{
	int		flag;
	int		digit;
	int		tmp_num;
	char	arr[11];

	flag = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		conv2char(nb, flag, arr);
		tmp_num = tmp_var(nb, &flag);
		digit = count_digit(tmp_num);
		handle_write(digit, nb, flag, arr);
	}
}
