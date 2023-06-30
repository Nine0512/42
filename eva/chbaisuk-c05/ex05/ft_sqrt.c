/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:47:56 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/24 14:31:37 by chbaisuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	value;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	value = 2;
	while (value * value <= nb)
	{
		if (value * value == nb)
			return (value);
		value++;
	}
	return (0);
}
