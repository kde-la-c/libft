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

int	print_list(t_list *lst, char *str)
{
	int	i;

	printf("%s :\n", str);
	if (!lst)
		return (-1);
	i = 0;
	while (lst && lst->content)
	{
		// sleep(1);
		printf("%i: \033[0;32m%s\033[0m\n", i++, ((char *)lst->content));
		lst = lst->next;
	}
	printf("%i: \033[0;31mNULL\033[0m\n", i);
	// write(1, ">:cc\n", 5);
	return (i);
}

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
	print_list(ret, "   ret");
	return (ret);
}

int main()
{
	t_list	*lst;
	t_list	*test;

	lst = ft_lstnew("caca");
	lst->next = ft_lstnew("pipi");
	lst->next->next = ft_lstnew("tamere");
	test = ft_lstdup(lst, sizeof(char *));

	print_list(lst, "lst");
	print_list(test, "test");
}
