/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crong-sh <crong-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:43:28 by crong-sh          #+#    #+#             */
/*   Updated: 2024/12/05 15:43:28 by crong-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void    check_specifier(const char c, va_list ptr, int *len)
{
    if (c == 'c')
        ft_putchar((char)va_arg(ptr, int), len);
    else if (c == 's')
        ft_putstr(va_arg(ptr, char*), len);
    else if (c == 'p')
        ft_putaddress(va_arg(ptr, void *), len);
    else if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(ptr, int), len);
    else if (c == 'u')
        ft_putunsigned(va_arg(ptr, unsigned int), len);
    else if (c == 'x')
        ft_puthex_up(va_arg(ptr, int), len);
    else if (c == 'X')
        ft_puthex_low(va_arg(ptr, int), len);
    else if (c == '%')
        ft_putchar('%', len);
}

int ft_printf(const char *str, ...)
{
    int len;
    va_list ptr; 
    va_start(ptr, str);

    len = 0;
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            check_specifier(*str, ptr, &len);
            str++;
        }
        else
        {
            ft_putchar(*str, &len);
            str++;
        }
    }
    
    
    va_end(ptr);
    return (len);
}
// #include <stdio.h>
// int main(void)
// {
//     const char str = '2';
//     int n = 128;
//     int n1 = 30;
//     ft_printf("%d\n", ft_printf("%p\n", &n));
//     printf("%p\n", &n);
// }