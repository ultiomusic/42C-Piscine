/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:14:41 by beligul           #+#    #+#             */
/*   Updated: 2021/12/07 15:14:45 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	s;

	s = 0;
	while (src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}
	dest[s] = '\0';
	return (dest);
}
