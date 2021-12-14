/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:28:26 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/07 18:10:53 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	update(int *liste, int i, int n)
{	
	int	temp;

	if (liste[i] == 10 + i - n)
		update(liste, i - 1, n);
	else
	{
		temp = liste[i];
		while (i <= n - 1)
		{
			liste[i] = temp + 1;
			temp = liste[i];
			i++;
		}
	}
}

void	write_nbr(int *liste, int n)
{
	int	i;
	int	num;

	i = -1;
	while (++i < n)
	{
		num = 48 + liste[i];
		write(1, &num, 1);
	}
}

void	ft_print_combn(int n)
{
	int	liste[9];
	int	i;

	i = -1;
	while (++i < n)
		liste[i] = 0;
	update(liste, n - 1, n);
	write_nbr(liste, n);
	while (liste[0] != 10 - n)
	{
		write(1, ", ", 2);
		update(liste, n - 1, n);
		write_nbr(liste, n);
	}
}
/*
int main(void){
	ft_print_combn(8);
	return (0);
}
*/
