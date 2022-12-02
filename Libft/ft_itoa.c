/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:29:53 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 12:58:31 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_decimals(long int value)
{
	int	decimals;

	decimals = 0;
	if (value == -2147483648)
		value = 2147483648;
	if (value < 0)
		value = value * (-1);
	while (value > 9)
	{
		decimals++;
		value = value / 10;
	}
	decimals++;
	return (decimals);
}

static char	*copy_int_string(long int n, int decimals, char *res)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		n = 2147483648;
	while (n > 9)
	{
		i = n % 10;
		res[decimals--] = i + '0';
		n = n / 10;
	}
	res[decimals] = (n % 10) + '0';
	return (res);
}

char	*ft_itoa(int n)
{
	int			decimals;
	char		*res;
	int			sign;
	long int	aux;

	aux = n;
	sign = 0;
	decimals = count_decimals(aux);
	if (aux < 0)
	{
		sign = 1;
		aux = aux * (-1);
	}
	res = (char *)malloc((decimals + sign + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (sign)
		res[0] = '-';
	res = copy_int_string(aux, decimals + sign - 1, res);
	res[decimals + sign] = '\0';
	return (res);
}
