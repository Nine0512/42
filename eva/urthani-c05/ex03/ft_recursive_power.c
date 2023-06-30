/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:16:38 by urthani           #+#    #+#             */
/*   Updated: 2023/06/19 20:14:26 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
