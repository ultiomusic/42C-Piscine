/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeklik <akeklik@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 06:51:16 by akeklik           #+#    #+#             */
/*   Updated: 2021/12/08 16:40:32 by akeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char int_to_char(int nb)
{
    if (nb < 10)
        nb += 48;
    else if (nb < 16)
        nb += 87;
    return ((char)nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			ft_putchar('\\');
            c = int_to_char((int)(str[i] / 16));
			ft_putchar(c);
            c = int_to_char((int)(str[i] % 16));
			ft_putchar(c);
		}
		else
			ft_putchar(str[i]);
	}
}

int	main(void)
{
	char	str[20] = "1253gsjd\t\n\r";
	ft_putstr_non_printable(str);
	return (0);
}
