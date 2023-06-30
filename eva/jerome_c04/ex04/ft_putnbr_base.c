/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:56:56 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/15 17:09:14 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_is_wrong(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (base[i] < 32 || base[i] > 126)
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	lnbr;

	lnbr = nbr;
	base_len = ft_strlen(base);
	if (base_len < 2 || ft_base_is_wrong(base))
		return ;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	if (lnbr > (base_len - 1))
	{
		ft_putnbr_base(lnbr / base_len, base);
		ft_putnbr_base(lnbr % base_len, base);
	}
	else
		ft_putchar(base[lnbr]);
}
/*
int	main(void)
{
	ft_putnbr_base(120,"01");
	return (0);
}
*/
