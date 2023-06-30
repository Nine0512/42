/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uolle <uolle@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:20:39 by uolle             #+#    #+#             */
/*   Updated: 2023/06/08 22:18:19 by uolle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int	a, b;
// 	int	div;
// 	int	mod;

// 	a = 5;
// 	b = 2;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d\n", div, mod);
// 	return 0;
// }
