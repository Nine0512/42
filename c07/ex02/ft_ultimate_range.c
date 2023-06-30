/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:24:40 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/22 12:52:14 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	min_tmp;
	int	i;

	i = 0;
	min_tmp = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (max - min_tmp);
}
/*
#include <stdio.h>

int main()
{
    int *result;
    int size;
    int min = 1;
    int max = 12;

    size = ft_ultimate_range(&result, min, max);

    if (result == NULL)
    {
        printf("The range is NULL.\n");
        printf("Expected size: 0\n");
        printf("Actual size: %d\n", size);
    }
    else
    {
        printf("The range is: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        printf("Expected size: %d\n", max - min);
        printf("Actual size: %d\n", size);
    }

    free(result); 
    return 0;
}
*/
