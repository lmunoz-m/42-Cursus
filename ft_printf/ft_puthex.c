/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:16:53 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/12 14:30:38 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned int num, char c)
{
	int	res;
	
	res = 0;
	if (num >= 16)
		{
			res += ft_puthex(num / 16, c);
			res += ft_puthex(num % 16, c);
		} 
		else
		{
			if (num <= 9)
				res += ft_putchar((num + '0'));
			else if(c == 'x')
				res += ft_putchar((num - 10 + 'a'));
			else if(c == 'X')
				res += ft_putchar((num - 10 + 'A'));
		}
	return (res);
}