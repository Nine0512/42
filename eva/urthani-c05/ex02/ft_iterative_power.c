/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urthani <urthani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:51:29 by urthani           #+#    #+#             */
/*   Updated: 2023/06/19 19:13:31 by urthani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
