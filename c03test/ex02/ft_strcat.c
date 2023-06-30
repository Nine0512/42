/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:54:30 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/13 12:03:46 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len_a;
	int	len_b;

	len_a = 0;
	len_b = 0;
	while (dest[len_a] != '\0')
		len_a++;
	while (src[len_b] != '\0')
	{
		dest[len_a++] = src[len_b++];
	}
	dest[len_a] = '\0';
	return (dest);
}
