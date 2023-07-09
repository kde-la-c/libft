/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:07:30 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/06/08 21:07:34 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst, size_t contsize)
{
	t_list	*ret;
	t_list	*tmp1;
	void	*content;

	if (!lst)
		return (NULL);
	content = (void *)malloc(contsize);
	content = &(*lst->content);
	ret = ft_lstnew(content);
	tmp1 = ret;
	tmp1 = tmp1->next;
	lst = lst->next;
	while (lst)
	{
		content = (void *)malloc(contsize);
		content = &(*lst->content);
		tmp1 = ft_lstnew(content);
		tmp1 = tmp1->next;
		lst = lst->next;
	}
	return (ret);
}
