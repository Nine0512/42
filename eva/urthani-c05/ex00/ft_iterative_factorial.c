/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:47:11 by urthani           #+#    #+#             */
/*   Updated: 2023/06/18 15:17:37 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb)
	{
		ans *= nb;
		nb--;
	}
	return (ans);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(-7));
	return (0);
}*/
