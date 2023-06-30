/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loswaans <swaanslouis@163.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:00:45 by loswaans          #+#    #+#             */
/*   Updated: 2023/06/28 21:10:35 by loswaans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup_ptr;

	dup_ptr = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup_ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		dup_ptr[i] = src[i];
		i++;
	}
	dup_ptr[i] = '\0';
	return (dup_ptr);
}
