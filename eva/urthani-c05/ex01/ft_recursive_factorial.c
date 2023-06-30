/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:02:19 by urthani           #+#    #+#             */
/*   Updated: 2023/06/19 18:47:25 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb > 0)
	{
		ans *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (ans);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/