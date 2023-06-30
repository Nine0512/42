/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:55:28 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/12 16:54:34 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 32 && str[i - 1] <= 47)
				|| (str[i - 1] >= 58 && str[i - 1] <= 64)
				|| i == 0)
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && i != 0)
			str[i] += 32;
		i++;
	}
	return (str);
}