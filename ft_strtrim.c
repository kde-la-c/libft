/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:24:39 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/19 15:24:41 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getstart(const char *str, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	int				b;

	i = 0;
	j = 0;
	b = 1;
	while (str[i] && b)
	{
		b = 0;
		j = 0;
		while (set[j] && !b)
		{
			if (set[j] == str[i])
				b = 1;
			j++;
		}
		if (!b)
			return (i);
		i++;
	}
	return (i);
}

static int	getlen(const char *str, const char *set)
{
	unsigned int	i;
	unsigned int	j;
	int				b;

	i = ft_strlen(str);
	j = 0;
	b = 1;
	while (i-- > 0 && b)
	{
		b = 0;
		j = 0;
		while (set[j] && !b)
		{
			if (set[j] == str[i])
				b = 1;
			j++;
		}
		if (!b)
			return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		len;
	char				*ret;

	if (!s1)
		return ((char *)s1);
	start = getstart(s1, set);
	len = (getlen(s1, set) - start) + 1;
	ret = ft_substr(s1, start, len);
	return (ret);
}
