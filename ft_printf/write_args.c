/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:45:59 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/12 15:19:13 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int write_args(char const c, va_list args) {
	
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if ( c == 'd' || c == 'i')
		i += ft_putnbr(va_arg(args, int));
	else if ( c == 's')
		i += ft_putstr(va_arg(args,char *));
	else if ( c == 'u')
		i += ft_putunsigned(va_arg(args, unsigned int));
	 else if ( c == 'p')
		i += ft_putpointer((unsigned long int)va_arg(args, void *), 1);
	else if ( c == 'x' || c == 'X')
		i += ft_puthex(va_arg(args, unsigned int), c);
	else if ( c == '%')
		i += ft_putchar('%');
	else
		return (-1);
	return (i); //else (-1)
}