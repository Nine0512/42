/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_make_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:51:35 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/25 20:21:27 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char c)
{
	if (c == ' ')
		return (0);
	if (c == '\f' || c == '\r' || c == '\n')
		return (0);
	if (c == '\t' || c == '\v')
		return (0);
	return (1);
}

long long int	ft_atoi(char *str)
{
	int				i;
	long long int	result;
	int				signs;

	i = 0;
	result = 0;
	signs = 1;
	while (!check(str[i]))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signs = -signs;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = str[i] - '0' + result * 10;
		if (result > 4294967295)
			return (-1);
		i++;
	}
	return (result * signs);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i ++;
	return (i);
}

int	index_key(long long int key)
{
	if (key <= 20 && key >= 0)
		return (key);
	if (key % 10 == 0 && key / 100 == 0)
		return ((key / 10) - 2 + 20);
	if (key == 100)
		return (28);
	if (key == 1000)
		return (29);
	if (key == 1000000)
		return (30);
	if (key == 1000000000)
		return (31);
	return (-1);
}

char	*add_value(char *str, int *i)
{
	int		j;
	char	*value;

	j = 0;
	while (str[*i] != ':')
		(*i)++;
	(*i)++;
	while (!check(str[*i]))
		(*i)++;
	value = (char *)malloc(sizeof(char) * (ft_strlen(&str[*i]) + 1));
	if (!value)
		return (0);
	while (str[*i] && str[*i] != '\n')
	{
		if (check(str[*i]))
			value[j++] = str[*i];
		if (!check(str[*i]) && check(str[*i + 1]))
			value[j++] = ' ';
		(*i)++;
	}
	value[j] = '\0';
	return (value);
}
