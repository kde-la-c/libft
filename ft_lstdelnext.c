/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 02:40:48 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/07/14 02:40:52 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelnext(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->next->next;
	ft_lstdelone((*lst)->next, del);
	(*lst)->next = tmp;
}
