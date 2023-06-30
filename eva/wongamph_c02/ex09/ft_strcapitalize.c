/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:55:03 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/13 14:42:55 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c)
{
	int	checkk;

	checkk = 0;
	if ((c >= 32) && (c <= 47))
	{
		checkk = 1;
	}
	if (((c >= 58) && (c <= 64)))
	{
		checkk = 1;
	}
	if (((c >= 91) && (c <= 96)))
	{
		checkk = 1;
	}
	if (((c >= 123) && (c <= 126)))
	{
		checkk = 1;
	}
	return (checkk);
}

char	*ft_strcapitalize(char *str)
{
	int	tmp;

	tmp = 1;
	if (*str != '\0' && ((*str >= 'a') && (*str <= 'z')))
	{
		*str = *str - 32;
	}
	while (*str != '\0' )
	{
		if (check(*str))
		{
			if (((*(str + 1) >= 'a') && (*(str + 1) <= 'z')))
			{
				*(str + 1) = *(str + 1) - 32;
			}
		}
		else if (((*(str + 1) >= 'A') && (*(str + 1) <= 'Z')))
		{
			*(str + 1) = *(str + 1) + 32;
		}
		str++;
	}
	return (str);
}
