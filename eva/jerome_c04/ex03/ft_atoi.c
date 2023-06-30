/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <ntanajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:41:13 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/27 14:59:48 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	value;
	int	sign;
	int	i;

	value = 0;
	sign = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
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
#include <stdio.h>

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
	printf("%d\n", ft_atoi(" -\t2dsf-24"));
	printf("%d\n", ft_atoi("\n- 2dsf-24"));
	return (0);
}
*/
