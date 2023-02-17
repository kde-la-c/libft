/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:42:06 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/10 22:42:10 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned long		i;
	unsigned char		*ret;
	unsigned char		*tmp1;
	const unsigned char	*tmp2;

	i = 0;
	ret = dst;
	tmp1 = dst;
	tmp2 = src;
	if (tmp1 > tmp2)
		while (len-- > 0)
			tmp1[len] = tmp2[len];
	else
	{
		while (i < len && (dst || src))
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	}
	dst = tmp1;
	return (ret);
}
