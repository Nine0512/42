/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaans <swaanslouis@163.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:12:38 by loswaans          #+#    #+#             */
/*   Updated: 2023/06/28 21:21:48 by loswaans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	cummulative_strlen(int size, char **strs)
{
	int	len;

	len = 0;
	while (size-- > 0)
		len += my_strlen(strs[size]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*join;
	size_t	total_length;

	total_length = cummulative_strlen(size, strs) + 
		my_strlen(sep) * ((size > 0) + 1);
	join = (char *)malloc(sizeof(char) * total_length);
	if (join == NULL)
		return (NULL);
	j = 0;
	k = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i])
			join[j++] = strs[k][i++];
		i = 0;
		while (k != size - 1 && sep[i])
			join[j++] = sep[i++];
		k++;
	}
	join[j] = '\0';
	return (join);
}
