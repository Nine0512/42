/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 19:08:58 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/11 19:44:46 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*a;
	char	isword;

	isword = 'n';
	a = str;
	while (*str != '\0')
	{
		if (isword == 'n')
		{
			if (*str >= 'a' && *str <= 'z')
				*str += ('A' - 'a');
			if (check(str))
				isword = 'y';
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
				*str += ('a' - 'A');
			if (!(check(str)))
				isword = 'n';
		}
		str++;
	}
	return (a);
}
