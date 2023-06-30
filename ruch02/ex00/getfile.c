/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <tplaengm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:33:39 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/25 19:42:55 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "communithe.h"
#define BUFFER_SIZE 16

char	*ft_get_file(char *file_name)
{
	int		file;
	int		bytes;
	int		bytes_total;
	char	buffer[BUFFER_SIZE];
	char	*str;

	file = open(file_name, O_RDONLY);
	bytes = read(file, buffer, BUFFER_SIZE);
	bytes_total = bytes;
	while (bytes > 0)
	{
		bytes = read(file, buffer, BUFFER_SIZE);
		bytes_total += bytes;
	}
	close(file);
	str = (char *)malloc(bytes_total * sizeof(char));
	file = open(file_name, O_RDONLY);
	bytes = read(file, str, bytes_total);
	return (str);
}