/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:37:10 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/11 18:22:13 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(char const *, ...);
int	ft_putchar(char c);
int ft_putunsigned(unsigned int num);
int	ft_putstr(char *s);
int ft_putnbr(int num);
int	ft_putpointer(unsigned long long ptr, int first);
int ft_puthex(unsigned int num, char c);
int write_args(char const c, va_list args);
#endif