/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:34:45 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/26 12:19:35 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"
#include "get_file.h"

int	validate_arguments(int argc)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	parse_arguments(int argc, char *argv[], long long int *num, char **str)
{
	if (argc == 2)
	{
		*num = check_num(argv[1]);
		*str = ft_get_file("numbers.dict");
	}
	else
	{
		*num = check_num(argv[2]);
		*str = ft_get_file(argv[1]);
	}
	if (!*str)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	if (*num == -1)
	{
		ft_putstr("Error\n");
		free(*str);
		return (0);
	}
	return (1);
}

int	process_dictionary(char *str, struct s_dict **dic)
{
	*dic = make_struct(str, 0, -1);
	if (!*dic)
	{
		write(1, "Dict Error\n", 11);
		ft_free(*dic);
		free(str);
		return (0);
	}
	return (1);
}

void	cleanup(struct s_dict *dic, char *str)
{
	if (dic)
	{
		ft_free(dic);
		free(str);
	}
}

int	main(int argc, char *argv[])
{
	char			*str;
	struct s_dict	*dic;
	long long int	num;

	if (!validate_arguments(argc))
		return (0);
	if (!parse_arguments(argc, argv, &num, &str))
		return (0);
	if (!process_dictionary(str, &dic))
	{
		cleanup(dic, str);
		return (0);
	}
	print_dict(num, dic);
	write(1, "\n", 1);
	cleanup(dic, str);
	return (0);
}
