/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beligul <beligul@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:03:31 by beligul           #+#    #+#             */
/*   Updated: 2021/12/02 16:03:33 by beligul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		i;

	i = 0;
	while (i < size -1)
	{
		tmp = tab[i];
		tab[i] = tab [size - 1];
		tab[size -1] = tmp;
		size--;
		i++;
	}
}
