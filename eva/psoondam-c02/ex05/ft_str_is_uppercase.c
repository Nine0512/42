/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoondam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:44:52 by psoondam          #+#    #+#             */
/*   Updated: 2023/06/20 11:07:47 by psoondam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	int		is_uppercase1;
	int		is_uppercase2;
		int     is_uppercase3;
		int     is_uppercase4;
		int     is_uppercase5;
	char	str1[];
	char	str2[];
	char	str3[];
	char	str4[];
	char	str5[];

		str1[] = "";
		str2[] = "dcsfd";
		str3[] = "ADF";
		str4[] = "adfaDSDA";
		str5[] = "_dfgs";
		is_uppercase1 = ft_str_is_uppercase(str1);
		is_uppercase2 = ft_str_is_uppercase(str2);
		is_uppercase3 = ft_str_is_uppercase(str3);
		is_uppercase4 = ft_str_is_uppercase(str4);
		is_uppercase5 = ft_str_is_uppercase(str5);
		printf("%d %d %d %d %d", is_uppercase1, is_uppercase2, is_uppercase3,
				is_uppercase4,is_uppercase5);
}
*/
