/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:58:04 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 18:30:45 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nbr)
{
	int	num1;
	int	num2;

	num1 = nbr / 10 + 48;
	num2 = nbr % 10 + 48;
	write(1, &num1, 1);
	write(1, &num2, 1);
}

void	ft_print_comb2(void)
{
	int	f_num;
	int	s_num;

	f_num = 0;
	while (f_num < 99)
	{
		s_num = f_num + 1;
		while (s_num < 100)
		{
			write_nbr(f_num);
			write(1, " ", 1);
			write_nbr(s_num);
			if (!(s_num == 99 && f_num == 98))
				write(1, ", ", 2);
			s_num++;
		}
		f_num++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
