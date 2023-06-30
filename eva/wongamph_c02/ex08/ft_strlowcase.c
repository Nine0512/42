/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:53:00 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/13 14:42:19 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}
