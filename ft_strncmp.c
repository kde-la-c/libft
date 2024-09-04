/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:20:14 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/14 16:20:23 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	i1;
	unsigned int	i2;

	i = 0;
	if (!n || !s1 || !s2)
		return (0);
	i1 = (unsigned char)s1[i];
	i2 = (unsigned char)s2[i];
	while (i < n - 1 && s1[i] && s2[i])
	{
		if (i1 != i2)
		{
			return (i1 - i2);
		}
		i++;
		i1 = (unsigned char)s1[i];
		i2 = (unsigned char)s2[i];
	}
	return (i1 - i2);
}
