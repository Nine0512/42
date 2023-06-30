/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:36:52 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/24 14:27:47 by chbaisuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i[2];

	i[0] = 1;
	i[1] = 1;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i[0] <= power)
	{
		i[1] = i[1] * nb;
		i[0]++;
	}
	return (i[1]);
}

/*int main(void)
{
	printf("%d",ft_iterative_power(2,5));
}*/
