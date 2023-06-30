/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:20:32 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/22 12:24:01 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	res = (int *)malloc((max - min) * sizeof(int));
	if (!res || min >= max)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

/*
#include <stdio.h>

int	len(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_range(1,6);
	i = 0;
	while (i < len(arr))
		printf("%d ", arr[i++]);
	printf("\n");
	return (0);
}
*/
