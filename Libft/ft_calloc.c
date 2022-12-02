/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:08:22 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/29 15:33:15 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*s;
	size_t		tam;

	tam = count * size;
	s = malloc(tam);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, tam);
	return (s);
}
