/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 07:26:44 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/20 07:26:46 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countsubstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ret;

	i = 0;
	j = 0;
	ret = malloc(sizeof(char *) * (countsubstr(s, c) + 1));
	if (!ret || !s)
		return (NULL);
	while (i < countsubstr(s, c))
	{
		while (s[j] == c && s[j + 1])
			j++;
		if (ft_strchr(&s[j], c))
			ret[i] = ft_substr(s, j, ft_strchr(&s[j], c) - &s[j]);
		else if (ft_strlen(&s[j]))
			ret[i] = ft_substr(s, j, ft_strlen(s) - j);
		if (!ret[i])
			return (ft_dfree((void **)ret), NULL);
		j += ft_strlen(ret[i++]);
	}
	ret[i] = NULL;
	return (ret);
}
