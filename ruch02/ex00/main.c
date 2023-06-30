/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:02:53 by thrattan          #+#    #+#             */
/*   Updated: 2023/06/25 19:44:27 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "communithe.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
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

int	main(int argc, char *argv[])
{
	char			*str;
	struct s_dict	*dic;
	long long int	num;

	num = ft_atoi_dict(argv[1]);
	str = ft_get_file("numbers.dict");
	// printf("%s", str);
	dic = make_struct(dic, str);
	if (!dic)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	print_dict(num, dic);
	// free(str);
	/*
	int i = 0;
	for (i = 0; i< 32;i ++)
	{
		 printf("%lld %s\n",dic[i].key,dic[i].value);
	}
	return (0);
	*/
}
