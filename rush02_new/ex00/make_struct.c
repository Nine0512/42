/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:17:18 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/25 20:37:27 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheader.h"

void	set_dict(struct s_dict *dic)
{
	int	i;

	i = 0;
	while (i < 32)
		dic[i++].key = -1;
}

struct s_dict	*make_struct(char *str, int c, int i)
{
	long long int	key;
	struct s_dict	*dic;

	dic = (struct s_dict *)malloc(sizeof(struct s_dict) * 35);
	if (!dic)
		return (0);
	set_dict(dic);
	while (str[++i] != '\0')
	{
		key = ft_atoi(&str[i]);
		if (index_key(key) != -1)
		{
			if (dic[index_key(key)].key == -1 && ++c)
			{
				dic[index_key(key)].key = key;
				dic[index_key(key)].value = add_value(str, &i);
			}
		}
		while (str[i] && str[i] != '\n')
			i++;
	}
	if (c != 32)
		return (0);
	return (dic);
}
