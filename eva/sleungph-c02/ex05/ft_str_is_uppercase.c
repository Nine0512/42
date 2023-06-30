/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:16:02 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/21 12:04:33 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	retour;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 65 || *(str + i) > 90)
		{
			retour = 0;
		}
	i++;
	}
	return (retour);
}

/*
int	main(void)
{
	char	a[] = "HELLO";
	char	b[] = "Hello";

	int	is_uppercase_a = ft_str_is_uppercase(a);
	int	is_uppercase_b = ft_str_is_uppercase(b);

	char result_a = '0' + is_uppercase_a;
	char result_b = '0' + is_uppercase_b;

	write(1, &result_a, 1);
	write(1, "\n", 1);
	write(1, &result_b, 1);
	write(1, "\n", 1);
	return (0);
}
*/
