/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:47:09 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/11 18:24:32 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned(unsigned int num) {

	int	result;

	result = 0;
	if (num < 0)
	{
		num *= -1;
	}
	if (num >= 10)
	{
		result += ft_putunsigned(num / 10);
		num = num % 10;
	}
	result += ft_putchar(num + '0');
	return (result);
}