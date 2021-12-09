/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:02:37 by beligul           #+#    #+#             */
/*   Updated: 2021/12/09 14:00:27 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[c] != '\0')
	{
		if (d < size - 1)
		{
			dest[d] = src[c];
		}
		c++;
		d++;
	}
	dest[d - 1] = '\0';
	return (d);
}
