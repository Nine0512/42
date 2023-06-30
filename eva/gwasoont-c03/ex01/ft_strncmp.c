/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasoont <gwasoont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:43:04 by gwasoont          #+#    #+#             */
/*   Updated: 2023/06/21 11:38:22 by gwasoont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 == 0 && *s2 == 0)
			return (0);
		if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
/*int main()
{
	char	*a = "";
	char	*b = "";

	int	output = strncmp(a, b, 4);
	int ft_output = ft_strncmp(a, b, 4);

	printf("The real one is %d\n", output);
	printf("The fake one is %d\n", ft_output);
	return (0);
}*/