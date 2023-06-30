/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:13:12 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/10 17:37:08 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	idm;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		idm = i;
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + idm))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = tmp;
			}
			j++;
		}
		i++;
	}

}
