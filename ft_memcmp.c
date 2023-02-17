/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:44:38 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/15 19:44:41 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned int		i1;
	unsigned int		i2;
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;

	i = 0;
	tmp1 = s1;
	tmp2 = s2;
	i1 = (unsigned int) tmp1[i];
	i2 = (unsigned int) tmp2[i];
	if (!n)
		return (0);
	while (i < n)
	{
		i1 = (unsigned int) tmp1[i];
		i2 = (unsigned int) tmp2[i];
		if (i1 != i2)
		{
			return (i1 - i2);
		}
		i++;
	}
	return (i1 - i2);
}
