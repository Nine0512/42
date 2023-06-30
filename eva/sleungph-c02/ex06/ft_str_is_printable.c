/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:16:02 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/20 10:37:33 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	retour;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 32 || *(str + i) > 126)
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
	char	a[] = " ";
	char	b[] = "Hello";

	int	is_printable_a = ft_str_is_printable(a);
	int	is_printable_b = ft_str_is_printable(b);

	char result_a = '0' + is_printable_a;
	char result_b = '0' + is_printable_b;

	write(1, &result_a, 1);
	write(1, "\n", 1);
	write(1, &result_b, 1);
	write(1, "\n", 1);
	return (0);
}
*/
