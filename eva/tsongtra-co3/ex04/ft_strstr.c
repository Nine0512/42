/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsongtra <tsongtra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:17:21 by tsongtra          #+#    #+#             */
/*   Updated: 2023/06/21 15:44:37 by tsongtra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*text;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		text = str;
		find = to_find;
		while (*text != '\0' && *find != '\0' && *text == *find)
		{
			text++;
			find++;
		}
		if (*find == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	*t1 = "Hello World Easy";
// 	char	*t2 = "World";

// 	printf("Text =: %s",ft_strstr(t1,t2));
// }
