/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:00:25 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/21 10:37:03 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	ft_print_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argn, char **value)
{
	argn = 1;
	ft_print_char(value[0]);
	return (0);
}
