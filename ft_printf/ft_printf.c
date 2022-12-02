/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:39:27 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/09/30 10:41:42 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf(char const *s1, ...) {
	
	va_list	args;
	int		i;
	int		result;

	result = 0;
	i = 0;
	va_start(args, s1);
	while (s1[i])
	{
		if(s1[i] != '%')
			result += ft_putchar(s1[i]);
		else
			result += write_args(s1[++i], args);
		i++;
	}
	va_end(args);
	return (result);

}