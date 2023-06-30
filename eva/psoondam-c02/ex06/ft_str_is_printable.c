/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoondam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:10:35 by psoondam          #+#    #+#             */
/*   Updated: 2023/06/20 11:38:34 by psoondam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		is_printable;
	char	str[];

	str[] = "~";
	is_printable = ft_str_is_printable(str);
	printf("%d",is_printable);
}
*/
