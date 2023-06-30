/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:02:53 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/26 11:36:26 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 16

char	*ft_get_file(char *file_name)
{
	int		file;
	int		bytes;
	int		bytes_total;
	char	buffer[BUFFER_SIZE];
	char	*str;

	file = open(file_name, O_RDONLY);
	if (file < 0)
	{
		return (0);
	}
	bytes = read(file, buffer, BUFFER_SIZE);
	bytes_total = bytes;
	while (bytes > 0)
	{
		bytes = read(file, buffer, BUFFER_SIZE);
		bytes_total += bytes;
	}
	close(file);
	str = (char *)malloc(bytes_total * sizeof(char) + 1);
	file = open(file_name, O_RDONLY);
	bytes = read(file, str, bytes_total);
	str[bytes] = '\0';
	close(file);
	return (str);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_dict(long long int num, struct s_dict *d)
{
	int	i;

	i = 31;
	if (num <= 20 && num >= 0)
	{
		ft_putstr(d[num].value);
		return ;
	}
	while (i > 0)
	{
		if (num / d[i].key > 0)
		{
			if (d[i].key >= 100)
			{
				print_dict(num / d[i].key, d);
				ft_putstr(" ");
			}
			ft_putstr(d[i].value);
			num %= d[i].key;
			if (num > 0)
				ft_putstr(" ");
		}
		i--;
	}
}

long long int	check_num(char *num)
{
	long long int	n;
	int				i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] > '9' || num[i] < '0')
			return (-1);
		i++;
	}
	n = ft_atoi(num);
	if (n > 4294967295 || n < 0)
		return (-1);
	return (n);
}

void	ft_free(struct s_dict *dic)
{
	int	i;

	i = 0;
	if (dic)
	{
		while (i < 32)
		{
			free(dic[i].value);
			i++;
		}
		free(dic);
	}
}
