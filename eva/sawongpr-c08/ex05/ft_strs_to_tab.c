/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawongpr <sawongpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:44:07 by sawongpr          #+#    #+#             */
/*   Updated: 2023/06/22 14:00:19 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	char	*tmp;
	int		i;

	l = ft_strlen(src);
	tmp = (char *)malloc((l + 1) * sizeof(char));
	if (tmp == 0)
		return (0);
	if (tmp != 0)
	{
		i = 0;
		while (src[i])
		{
			tmp[i] = src[i];
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;

	t = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!t)
		return (0);
	i = -1;
	while (++i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
	}
	t[i].str = 0;
	return (t);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
