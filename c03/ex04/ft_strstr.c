/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:06:02 by beligul           #+#    #+#             */
/*   Updated: 2021/12/08 15:07:40 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	if (to_find[0] == '\0')
		return (str);
	c = 0;
	while (str[c] != '\0')
	{
		d = 0;
		while (to_find[d] != '\0')
		{
			if (str[c + d] == to_find[d])
			{
				d++;
			}
			else
				break ;
		}
		if (to_find[d] == '\0')
		{
			return (str + c);
		}
		c++;
	}
	return (0);
}
