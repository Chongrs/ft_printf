/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crong-sh <crong-sh@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:44:19 by crong-sh          #+#    #+#             */
/*   Updated: 2024/12/05 15:44:19 by crong-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

void ft_putchar(char c, int *len);

void ft_putnbr(int n, int *len);

void ft_putunsigned(unsigned int n, int *len);

void ft_putstr(const char *s, int *len);

size_t ft_strlen(const char *s);

void    ft_puthex_up(int n, int *len);

void    ft_puthex_low(int n, int *len);

void    ft_puthex_add(uintptr_t n, int *len);

void    ft_putaddress(void *ptr, int *len);

#endif
