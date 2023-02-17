/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:37:07 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/15 20:37:10 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	int		b;

	i = 0;
	j = 0;
	b = 0;
	if (!needle[0])
		return ((char *)&haystack[0]);
	while (i < n && haystack[i])
	{
		b = 0;
		j = 0;
		while (haystack[i + j] == needle[j] && !b && i + j < n)
		{
			if (haystack[i + j] != needle[j])
				b = 1;
			if (!needle[j + 1] && !b)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
