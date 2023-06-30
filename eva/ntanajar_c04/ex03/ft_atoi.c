/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:41:13 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/19 12:52:52 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	value;
	int	sign;
	int	i;

	value = 0;
	sign = 1;
	i = 0;
	while (*str <= 32 || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - '0');
		str++;
	}
	return (sign * value);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("23r"));
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi("test"));
	printf("%d\n", ft_atoi("t 323"));
	printf("%d\n", ft_atoi("23 323"));
	printf("%d\n", ft_atoi("-23-232"));
	printf("%d\n", ft_atoi(" -62 4+4343"));
	printf("%d\n", ft_atoi(" -2dsf-24"));
	printf("%d\n", ft_atoi(" - 2dsf-24"));
	return (0);
}
*/
