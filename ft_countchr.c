/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 22:05:57 by kde-la-c          #+#    #+#             */
/*   Updated: 2024/02/23 22:06:21 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countchr(char *str, char ch)
{
	char	*tmp;
	int		ret;

	if (!str)
		return (0);
	tmp = str;
	ret = 0;
	while (tmp && *tmp)
	{
		tmp = ft_strchr(tmp, ch);
		if (tmp && *tmp && tmp++)
			ret++;
	}
	return (ret);
}
