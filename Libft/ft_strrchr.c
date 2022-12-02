/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:06:55 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 12:45:22 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			p = (&((char *)s)[i]);
		i++;
	}
	if ((char) c == '\0')
		return (&((char *)s)[i]);
	if (p != 0)
		return (p);
	return (0);
}
