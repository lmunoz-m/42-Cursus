/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:12:34 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/12 14:13:39 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long ptr, int first)
{
	int	res;

	res = 0;
	if(first == 1)
		res += write(1, "0x", 2);
	if (ptr == 0)
		res += write(1, "0", 1);
	else
	{
		if (ptr >= 16)
		{
			res += ft_putpointer(ptr / 16, 0);
			res += ft_putpointer(ptr % 16, 0);
		} 
		else
		{
			if (ptr <= 9)
				res += ft_putchar((ptr + '0'));
			else
				res += ft_putchar((ptr - 10 + 'a'));
		}
		
	}
	return (res);
}