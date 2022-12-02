/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:24:50 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 18:51:11 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long int	max_min_num(unsigned long long int z, int y)
{
	unsigned long long int	num;

	num = 9223372036854775806;
	if (z > num + 1 && y < 0)
		return (0);
	if (z > num && y > 0)
		return (-1);
	return (z);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						y;
	unsigned long long int	z;

	i = 0;
	y = 1;
	z = 0;
	while (str[i] == 32 || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
			y = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = (str[i] - '0') + (z * 10);
		i++;
	}
	z = max_min_num(z, y);
	return (z * y);
}
