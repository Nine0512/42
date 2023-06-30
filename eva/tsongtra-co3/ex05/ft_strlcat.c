/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:12:29 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/21 15:45:28 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (size <= destl)
		return (srcl + size);
	while (destl < size - 1 && src[i] != '\0')
	{
		dest[destl] = src[i];
		i++;
		destl++;
	}
	dest[destl] = '\0';
	printf("%s\n", dest);
	return (destl + srcl);
}

// int	main(void)
// {
// 	char	*t1 = "Hello Wolrd";
// 	char	*t2 = "Easy Sample";

// 	ft_strlcat(t1,t2,15);
// 	printf("%s",t1);
// 	return (0);
// }
