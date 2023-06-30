/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoondam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 22:08:42 by psoondam          #+#    #+#             */
/*   Updated: 2023/06/19 22:51:09 by psoondam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
	int		is_lowercase1;
	int		is_lowercase2;
	int		is_lowercase3;
	int		is_lowercase4;
	int		is_lowercase5;
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
	is_lowercase1 = ft_str_is_lowercase(str1);
	is_lowercase2 = ft_str_is_lowercase(str2);
	is_lowercase3 = ft_str_is_lowercase(str3);
	is_lowercase4 = ft_str_is_lowercase(str4);
	is_lowercase5 = ft_str_is_lowercase(str5);
	printf("%d %d %d %d %d", is_lowercase1, is_lowercase2, is_lowercase3,
		is_lowercase4, is_lowercase5);
}
*/
