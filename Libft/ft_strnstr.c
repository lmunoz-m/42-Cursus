/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:22:39 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/22 17:17:50 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	h;
	size_t	k;

	i = 0;
	h = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		h = 0;
		if (haystack[i] == needle[h])
		{
			k = i;
			while (haystack[i] == needle[h++] && i++ < len)
			{
				if (needle[h] == '\0')
					return (((char *)haystack) + k);
			}
			i = k;
		}
		i++;
	}
	return (0);
}
