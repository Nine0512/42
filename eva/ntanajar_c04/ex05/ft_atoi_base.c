/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:36:02 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/19 13:18:23 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
		if (base[i] < 33 || base[i] > 126)
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

int	find_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = -1;
	if (ft_strlen(base) < 2 || ft_base_is_wrong(base))
		return (0);
	while (*str <= 32 || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		if (find_char(base, *str) != -1)
			result = (result * ft_strlen(base)) + find_char(base, *str);
		else
			return (result * sign);
		str++;
	}
	return (result * sign);
}
/*int	main(void)
{
	printf("%d", ft_atoi_base("  1310 001", " 31"));
	return (0);
}*/
