/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:38:59 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/02/01 19:39:01 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_clearptrs(void *ptr, t_list *ret, void (*del)(void *))
{
	del(ptr);
	if (ret)
		ft_lstclear(&ret, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	void	*ptr;

	if (!lst)
		return (NULL);
	ptr = f(lst->content);
	if (!ptr)
		return (NULL);
	tmp = ft_lstnew(ptr);
	ret = tmp;
	if (!tmp)
		return (ft_clearptrs(ptr, ret, del));
	while (lst && lst->next)
	{
		ptr = f(lst->next->content);
		tmp->next = ft_lstnew(ptr);
		if (!ptr || !tmp->next)
			return (ft_clearptrs(ptr, ret, del));
		tmp = tmp->next;
		lst = lst->next;
	}
	return (ret);
}
