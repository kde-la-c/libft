/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:11:16 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/10 22:11:20 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long		i;
	unsigned char		*tmp1;
	unsigned char		*ret;
	const unsigned char	*tmp2;

	i = 0;
	tmp1 = dst;
	ret = dst;
	tmp2 = src;
	while (i < n && (dst || src))
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	dst = tmp1;
	return (ret);
}
