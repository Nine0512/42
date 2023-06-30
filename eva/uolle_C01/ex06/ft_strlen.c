/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uolle <uolle@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:16:41 by uolle             #+#    #+#             */
/*   Updated: 2023/06/08 22:38:44 by uolle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	res;

	res = 0;
	while (str[res] != '\0')
	{
		res++;
	}
	return (res);
}

// int	main()
// {
// 	char	*req = "Hello World!";

// 	ft_strlen(req);
// 	printf("%d",ft_strlen(req));
// 	return 0;
// }
