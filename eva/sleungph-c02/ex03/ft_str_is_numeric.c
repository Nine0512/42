/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 09:59:04 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/20 10:23:41 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	retour;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 48 || *(str + i) > 57)
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
	char	a[] = "12345";
	char	b[] = "Hello123";

	int	is_numeric_a = ft_str_is_numeric(a);
	int	is_numeric_b = ft_str_is_numeric(b);

	char result_a = '0' + is_numeric_a;
	char result_b = '0' + is_numeric_b;

	write(1, &result_a, 1);
	write(1, "\n", 1);
	write(1, &result_b, 1);
	write(1, "\n", 1);
    return (0);
}
*/