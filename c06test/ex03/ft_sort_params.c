/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:49:48 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/21 13:56:59 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	str_compare(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort(int argn, char **value)
{
	int		i;
	int		j;
	int		idm;
	char	*tmp;

	i = 1;
	while (i < argn - 1)
	{
		idm = i;
		j = i + 1;
		while (j < argn)
		{
			if (str_compare(value[j], value[idm]) < 0)
			{
				tmp = value[i];
				value[i] = value[j];
				value[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argn, char **value)
{
	int	i;

	i = 1;
	ft_sort(argn, value);
	while (i < argn)
		ft_print(value[i++]);
	return (0);
}
