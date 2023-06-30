/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:19:05 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/24 14:31:19 by chbaisuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(void)
{
	printf("%d", ft_recursive_power(2,5));
}*/
