/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-m <lmunoz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:33:47 by lmunoz-m          #+#    #+#             */
/*   Updated: 2022/08/22 13:04:20 by lmunoz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*r;

	if (!lst || !f)
		return (NULL);
	r = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		s = ft_lstnew(f(lst->content));
		if (s == NULL)
		{	
			ft_lstclear(&r, del);
			return (NULL);
		}
		ft_lstadd_back(&r, s);
		lst = lst->next;
	}
	return (r);
}
