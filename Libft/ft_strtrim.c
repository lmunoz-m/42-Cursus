/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:27:01 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 12:53:47 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_long(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	count_long_back(char const *s1, char const *set, int i)
{
	int	z;

	z = ft_strlen(s1);
	while (z > 0 && ft_strchr(set, s1[z - 1]) && z > i)
		z--;
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*res;
	size_t	j;
	size_t	z;

	i = 0;
	if (s1 == 0)
		return (NULL);
	i = count_long(s1, set);
	z = count_long_back(s1, set, i);
	res = (char *) malloc((z - i + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	j = 0;
	if ((z - i + 1) != 0)
	{
		while (i < z)
		{
				res[j] = s1[i];
				j++;
				i++;
		}
	}
	res[j] = '\0';
	return (res);
}
