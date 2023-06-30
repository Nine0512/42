/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:16:02 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/21 12:01:46 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	retour;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 97 || *(str + i) > 122)
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
	char	a[] = "hello";
	char	b[] = "Hello";

	int	is_lowercase_a = ft_str_is_lowercase(a);
	int	is_lowercase_b = ft_str_is_lowercase(b);

	char result_a = '0' + is_lowercase_a;
	char result_b = '0' + is_lowercase_b;

	write(1, &result_a, 1);
	write(1, "\n", 1);
	write(1, &result_b, 1);
	write(1, "\n", 1);
	return (0);
}
*/
