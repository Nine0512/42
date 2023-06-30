/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:52:52 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/22 17:19:55 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_all_len(int size, char **str, int sep_size)
{
	int	i;
	int	ans;

	i = 0;
	ans = 0;
	while (i < size)
	{
		ans += str_len(str[i]);
		ans += sep_size;
		i++;
	}
	ans -= sep_size;
	return (ans);
}

char	*str_copy(char *dest, char *src)
{
	int	len;
	int	i;

	len = str_len(dest);
	i = 0;
	while (src[i])
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*res;

	len = check_all_len(size, &*strs, str_len(sep));
	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < size)
	{
		str_copy(res, strs[i++]);
		str_copy(res, sep);
	}
	res[len] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*arr[] = {"hello", "world", "!!!", "hi"};
	char	*ans = ft_strjoin(0, &*arr, " , ");
	printf("%s\n" , ans);
	return (0);
}
*/
