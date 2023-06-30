/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:44:20 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/20 12:42:14 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lena;
	unsigned int	lenb;
	unsigned int	i;

	lena = 0;
	lenb = 0;
	i = 0;
	while (dest[lena])
		lena++;
	while (src[lenb])
		lenb++;
	while (src[i] && lena < size)
	{
		dest[lena] = src[i];
		i++;
		lena++;
	}
	dest[lena] = '\0';
	return (lena + lenb);
}
