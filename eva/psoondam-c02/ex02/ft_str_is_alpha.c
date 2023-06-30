/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoondam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:40:28 by psoondam          #+#    #+#             */
/*   Updated: 2023/06/19 22:05:17 by psoondam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
	int		is_alpha;
	int		is_alpha2;
	int		is_alpha3;
	char	str[];
	char	str2[];
	char	str3[];

	str[] = "abcdEf0.455";
	str2[] = "abCD";
	str3[] = "";
	is_alpha = ft_str_is_alpha(str);
	is_alpha2 = ft_str_is_alpha(str2);
	is_alpha3 = ft_str_is_alpha(str3);
	printf("%d\n", is_alpha);
	printf("%d\n", is_alpha2);
	printf("%d", is_alpha3);
}
*/
