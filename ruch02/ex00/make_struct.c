/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:17:18 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/25 19:44:05 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "communithe.h"

void	set_dict(struct s_dict *dic)
{
	int	i;

	i = 0;
	while (i < 32)
		dic[i++].key = -1;
}

struct s_dict	*make_struct(struct s_dict *dic, char *str)
{
	int				i;
	long long int	key;
	int				c;

	i = -1;
	c = 0;
	dic = (struct s_dict *)malloc(sizeof(struct s_dict) * 35);
	if (!dic)
		return (0);
	set_dict(dic);
	while (str[++i] != '\0')
	{
		key = ft_atoi_dict(&str[i]);
		if (index_key(key) != -1)
		{
			if (dic[index_key(key)].key == -1 && ++c)
			{
				dic[index_key(key)].key = key;
				dic[index_key(key)].value = add_value(str, &i);
			}
		}
	}
	if (c != 32)
		return (0);
	return (dic);
}
