/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyamwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:57:57 by pyamwong          #+#    #+#             */
/*   Updated: 2023/06/19 19:38:27 by pyamwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countlen(char *to_find)
{
	int	n;

	n = 0;
	while (to_find[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	n;

	n = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	i = countlen(to_find);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			n = 0;
			while (str[j + n] == to_find[n] && to_find[n] != '\0')
				n++;
			if (n == i)
				return (str + j);
		}
		j++;
	}
	return (0);
}
