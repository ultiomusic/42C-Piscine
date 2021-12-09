/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:03:05 by beligul           #+#    #+#             */
/*   Updated: 2021/12/02 16:03:09 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		count;
	char	next_char;

	count = 0;
	while (true)
	{
		next_char = *str;
		if (next_char == '\0')
		{
			return (count);
		}
		count += 1;
		str++;
	}
}
