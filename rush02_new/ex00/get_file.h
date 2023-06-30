/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:15:09 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/26 11:18:41 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_FILE_H
# define GET_FILE_H
# include "myheader.h"

char	*ft_get_file(char *file_name);
void	ft_putstr(char *str);
void    print_dict(long long int num, struct s_dict *d);
long long int   check_num(char *num);
void    ft_free(struct s_dict *dic);

#endif
