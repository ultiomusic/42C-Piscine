/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:16:28 by beligul           #+#    #+#             */
/*   Updated: 2021/12/07 15:16:31 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if ((str[s] < 'A') || (str[s] > 'Z' && str[s] < 'a') || (str[s] > 'z'))
			return (0);
		s++;
	}
	return (1);
}
