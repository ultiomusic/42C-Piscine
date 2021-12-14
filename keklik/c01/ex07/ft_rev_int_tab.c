/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:22:58 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 01:39:38 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size - 2 - i > i)
	{
		temp = tab[size - 2 - i];
		tab[size - 2 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[9] = {1, 2,3,4,5,6,7,8};
	int i = -1;

	ft_rev_int_tab(tab, 9);
	while (tab[++i])
		printf("%d ", tab[i]);
	return (0);
}
*/
