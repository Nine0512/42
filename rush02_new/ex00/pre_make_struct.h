/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_make_struct.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwatjana <pannapa1987@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:09:42 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/26 09:04:17 by pwatjana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRE_MAKE_STRUCT_H
# define PRE_MAKE_STRUCT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

struct s_dict{
	long long int	key;
	char			*value;
};

int				ft_strlen(char*str);
long long int	ft_atoi(char *str);
int				index_key(long long int key);
char			*add_value(char*str, int*i);
void			set_dict(struct s_dict*dic);
struct s_dict	*make_struct(char*str, int c, int i);

#endif
