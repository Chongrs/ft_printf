/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crong-sh <crong-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:43:31 by crong-sh          #+#    #+#             */
/*   Updated: 2024/12/05 15:43:31 by crong-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putnbr(int n, int *len)
{
	long num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-', len);
		num = - num;
	}
	if (num > 9)
		ft_putnbr(num / 10, len);
	ft_putchar((num % 10) + '0', len);
}

void	ft_putunsigned(unsigned int n, int *len)
{
	if (n > 9)
		ft_putunsigned(n / 10, len);
	ft_putchar((n % 10) + '0', len);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(const char *s, int *len)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
	(*len) += ft_strlen(s);
}

void    ft_puthex_up(int n, int *len)
{
    char *hex;

    hex = "0123456789ABCEDEF";
    if (n >= 16)
        ft_puthex_up(n / 16, len);
    ft_putchar(hex[n % 16], len);
}

void    ft_puthex_low(int n, int *len)
{
    char *hex;

    hex = "0123456789abcdef";
    if (n >= 16)
        ft_puthex_low(n / 16, len);
    ft_putchar(hex[n % 16], len);
}
void    ft_puthex_add(uintptr_t n, int *len)
{
    char *hex;

    hex = "0123456789abcdef";
    if (n >= 16)
        ft_puthex_add(n / 16, len);
    ft_putchar(hex[n % 16], len);
}

void    ft_putaddress(void *ptr, int *len)
{
    ft_putstr("0x", len);
    ft_puthex_add((uintptr_t)ptr, len);
}
