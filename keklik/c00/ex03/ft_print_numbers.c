/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:47:04 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 18:22:19 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;

	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
