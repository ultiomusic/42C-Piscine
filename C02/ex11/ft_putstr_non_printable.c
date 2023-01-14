/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beeligul <beeligul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:56:42 by beeligul          #+#    #+#             */
/*   Updated: 2022/10/27 15:21:05 by beeligul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_hex(char c)
{
    ft_putchar("0123456789abcdef"[c / 16]);
    ft_putchar("0123456789abcdef"[c % 16]);
}
int    ft_char_is_printable(char c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

void    ft_putstr_non_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_char_is_printable(str[i]) == 1)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            ft_hex(str[i]);
        }
        i++;
    }
}
/*
int main (void)
{
    ft_putstr_non_printable("Coucou\ntu vas bien");
    ft_putchar('\n');
    ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
    ft_putchar('\n');
    ft_putstr_non_printable("");
}
/*
