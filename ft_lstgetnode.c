/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:43:07 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/06/20 03:43:31 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstgetnode(t_list *lst, int node)
{
	if (ft_lstsize(lst) < node)
		return (NULL);
	while (lst && node >= 0)
	{
		lst = lst->next;
		node--;
	}
	return (lst);
}
