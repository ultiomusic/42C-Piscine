/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:11:13 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 01:43:52 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_lowest_index(int *tab, int i, int size)
{
	int	lowest;
	int	lowest_index;

	lowest = tab[i];
	lowest_index = i;
	while (i < size)
	{
		if (tab[i] < lowest)
		{
			lowest = tab[i];
			lowest_index = i;
		}
		i++;
	}
	return (lowest_index);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	left;

	left = 0;
	while (left < size)
	{
		ft_swap(tab + left, tab + find_lowest_index(tab, left, size));
		left++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[15] = {1, 9,2,4,6,8,3,2,5,6,7,8,2,56,6};
	ft_sort_int_tab(tab, 15);
	for(int i = 0; i < 15; i++) {
		printf("%d ", tab[i]);	
	}
	return 0;
}
*/
