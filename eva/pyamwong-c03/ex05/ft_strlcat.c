/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyamwong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:57:02 by pyamwong          #+#    #+#             */
/*   Updated: 2023/06/19 20:04:02 by pyamwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	countlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	a = 0;
	b = countlen(dest);
	c = countlen(src);
	d = b;
	if (size <= b || size == 0)
		return (size + c);
	while (src[a] != '\0' && a < size - b - 1)
	{
		dest[d] = src[a];
		d++;
		a++;
	}
	dest[d] = '\0';
	return (b + c);
}
