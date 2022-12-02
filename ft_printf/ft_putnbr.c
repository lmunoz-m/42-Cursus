/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:47:09 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/10/12 12:52:55 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int num) {

	int	result;
	unsigned int	aux;


	result = 0;
	if (num < 0)
	{
		result += ft_putchar('-');
		aux = num * (-1);
	}
	else
		aux = num;
	if (aux >= 10)
	{
		result += ft_putnbr(aux / 10);
		aux = aux % 10;
	}
	result += ft_putchar(aux + '0');
	return (result);
}