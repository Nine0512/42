/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alinan-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:34:20 by alinan-m          #+#    #+#             */
/*   Updated: 2023/06/19 12:34:52 by alinan-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	num;

	num = 0;
	while (src[num] != '\0' && num < n)
	{
		dest[num] = src[num];
		num++;
	}
	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}
	return (dest);
}
