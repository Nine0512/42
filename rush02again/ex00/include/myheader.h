/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myheader.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:46:41 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/25 20:35:58 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYHEADER_H
# define MYHEADER_H
# include <stdlib.h>

struct s_dict{
	long long int	key;
	char			*value;
};

long long int	ft_atoi(char *str);
int				index_key(long long int key);
char			*add_value(char *str, int *i);
struct s_dict	*make_struct(char *str, int c, int i);

#endif
