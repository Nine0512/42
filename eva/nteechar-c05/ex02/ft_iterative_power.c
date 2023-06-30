/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nteechar <techazuza@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:53:56 by nteechar          #+#    #+#             */
/*   Updated: 2023/06/20 15:23:42 by nteechar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		value = nb;
		i = 1;
		while (i < power)
		{
			i++;
			value *= nb;
		}
		return (value);
	}
}
