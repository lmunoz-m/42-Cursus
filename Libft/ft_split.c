/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:11:46 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/24 19:10:17 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **result, int i)
{
	while (--i >= 0)
		free(result[i]);
	free(result);
	return (0);
}

static int	ft_tam_word(char c, char *s, int i)
{
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_count_words(char *str, char charset)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (str[i] == charset && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] == charset && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != charset && str[i] != '\0')
			i++;
		if (str[i] == charset || str[i] == '\0')
			j++;
	}
	return (j);
}

static char	**ft_split2(char *str, char charset, int i, char **result)
{
	int	j;
	int	k;
	int	cpal;

	cpal = 0;
	while (str[cpal] != '\0' && i < ft_count_words(str, charset))
	{
		k = 0;
		while (str[cpal] == charset)
			cpal++;
		j = ft_tam_word(charset, str, cpal);
		result[i] = malloc((j - cpal + 1) * sizeof(char));
		if (!result[i])
			return (ft_free(result, cpal));
		while (str[cpal] != charset && str[cpal] != '\0')
		{
			result[i][k] = str[cpal];
			cpal++;
			k++;
		}
		result[i][k] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	i = 0;
	if (s == 0)
		return (0);
	res = malloc((ft_count_words(((char *) s), c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res = ft_split2(((char *) s), c, i, res);
	return (res);
}
