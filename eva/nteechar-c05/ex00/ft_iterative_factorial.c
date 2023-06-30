/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nteechar <techazuza@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:48:28 by nteechar          #+#    #+#             */
/*   Updated: 2023/06/20 15:23:03 by nteechar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;
	int	i;

	if (nb >= 0)
	{
		value = 1;
		i = 1;
		while (i < nb)
		{
			i++;
			value *= i;
		}
		return (value);
	}
	else
		return (0);
}
