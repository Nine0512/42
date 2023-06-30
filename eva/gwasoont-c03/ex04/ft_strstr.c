/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwasoont <gwasoont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:28:21 by gwasoont          #+#    #+#             */
/*   Updated: 2023/06/21 10:57:14 by gwasoont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str [i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}

/*int main(void)
{
	char	c[] = "hello world";
	char	m[] = "lo";

	printf("%s", ft_strstr(c, m));
	// printf("%s", strstr(c, m));
	return (0);
}*/