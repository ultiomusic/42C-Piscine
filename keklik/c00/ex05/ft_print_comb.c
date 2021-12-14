/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:01:32 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 18:26:22 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	f_num;
	int	s_num;
	int	t_num;

	f_num = 48;
	while (f_num + 2 <= 57)
	{
		s_num = f_num + 1;
		while (s_num + 1 <= 57)
		{
			t_num = s_num + 1;
			while (t_num <= 57)
			{
				write(1, &f_num, 1);
				write(1, &s_num, 1);
				write(1, &t_num, 1);
				if (f_num != 55)
					write(1, ", ", 2);
				t_num++;
			}
			s_num++;
		}
		f_num++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
