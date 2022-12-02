/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:02:56 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 12:54:53 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	h;

	k = 0;
	h = ft_strlen(src);
	if (size != 0)
	{
		while ((src[k] != '\0') && (k < size - 1))
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	return (h);
}
