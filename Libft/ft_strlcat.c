/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:02:56 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/07/23 17:54:15 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	h;
	size_t	y;
	size_t	t;

	i = 0;
	h = ft_strlen(src);
	y = ft_strlen(dest);
	if (size < y + 1)
		return (h + size);
	else
	{
		t = size - y - 1;
		while (i < t && src[i] != 0)
		{
			dest[i + y] = src[i];
			i++;
		}
		dest[i + y] = '\0';
		return (y + h);
	}	
}
