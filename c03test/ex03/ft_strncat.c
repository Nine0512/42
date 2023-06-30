/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tplaengm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:04:29 by tplaengm          #+#    #+#             */
/*   Updated: 2023/06/13 12:15:59 by tplaengm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_a;
	unsigned int	len_b;

	len_a = 0;
	len_b = 0;
	while (dest[len_a] != '\0')
		len_a++;
	while (src[len_b] != '\0' && len_b < nb)
		dest[len_a++] = src[len_b++];
	dest[len_a] = '\0';
	return (dest);
}
