/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:28:17 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 16:16:59 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenbr(int nbr)
{
	int	num;

	if (nbr > 9)
		ft_writenbr(nbr / 10);
	num = (nbr % 10) + 48;
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_writenbr(nb);
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/
