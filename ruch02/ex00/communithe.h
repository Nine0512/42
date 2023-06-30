/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   communithe.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:36:40 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/25 19:44:01 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMUNITHU_H
# define COMMUNITHU_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

struct s_dict{
	long long int	key;
	char			*value;
};

int	check(char c);
long long int	ft_atoi_dict(char *str);
int	ft_strlen(char *str);
int	index_key(long long int key);
char	*add_value(char *str, int *i);
void	set_dict(struct s_dict *dic);
struct s_dict	*make_struct(struct s_dict *dic, char *str);

#endif