/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:30 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 18:23:56 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	num;

	if (n < 0)
		num = 78;
	else if (n >= 0)
		num = 80;
	write(1, &num, 1);
}
/*
int	main(void)
{
	ft_is_negative(-100);
	return (0);
}
*/
