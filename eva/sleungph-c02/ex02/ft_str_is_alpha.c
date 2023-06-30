/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleungph <sleungph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:00:15 by sleungph          #+#    #+#             */
/*   Updated: 2023/06/21 12:00:25 by sleungph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		retour;
	char	c;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 65 || (c > 90 && c < 97) || c > 122)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}

/*
#include <stdio.h>
int main(void)
{
	char str1[] = "HelloWorld";
	char str2[] = "Hello123";

	int result1 = ft_str_is_alpha(str1);
	int result2 = ft_str_is_alpha(str2);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);
	return (0);
}
*/
