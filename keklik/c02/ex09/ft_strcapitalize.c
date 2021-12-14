/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:16:44 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 07:17:17 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		while (str[i] && !is_alpha(str[i]))
			i++;
		if (str[i] && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		while (str[++i] && is_alpha(str[i]))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[30] = "ahMet5544///%%  ++erEn ";
	printf("%s ", ft_strcapitalize(str));
	return (0);
}
*/
