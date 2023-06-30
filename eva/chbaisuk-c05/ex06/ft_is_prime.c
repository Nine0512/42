/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:06:33 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/24 14:31:57 by chbaisuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	value;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	value = 2;
	while (value <= nb / 2) 
	{
		if (nb % value == 0)
			return (0);
		value++;
	}
	return (1);
}

/*int main(void)
{
	printf("%d",ft_is_prime(4));
}*/
