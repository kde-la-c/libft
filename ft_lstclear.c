/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 22:10:58 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/27 22:11:00 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!(lst && (*lst)))
		return ;
	temp = (*lst);
	while (temp)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		(*lst) = temp;
	}
}
