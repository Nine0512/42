/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:18:22 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/24 14:27:07 by chbaisuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i[2];

	i[0] = 1;
	i[1] = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i[0] <= nb)
	{
		i[1] *= i[0];
		i[0]++;
	}
	return (i[1]);
}

/*int main(void)
{
	int i = 544332;
	printf("%d",ft_iterative_factorial(i));
}*/
