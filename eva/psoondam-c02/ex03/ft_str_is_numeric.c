/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoondam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:22:11 by psoondam          #+#    #+#             */
/*   Updated: 2023/06/19 21:57:47 by psoondam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	int		is_numeric;
	int		is_numeric2;
	int		is_numeric3;
	char	str1[] = "";
	char	str2[] = "B";
	char	str3[] =  "658470";
	is_numeric = ft_str_is_numeric(str1);
	is_numeric2 = ft_str_is_numeric(str2);
	is_numeric3 = ft_str_is_numeric(str3);
	printf("%d\n", is_numeric);
	printf("%d\n", is_numeric2);
	printf("%d",is_numeric3);
}
*/
