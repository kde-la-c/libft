/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_f12.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:56:53 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/11/26 18:57:03 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_f12(char const *s1, char const *s2)
{
	t_count	c;
	size_t	totlen;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	ft_bzero((void *)&c, sizeof(t_count));
	totlen = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * totlen + 1);
	if (!ret)
		return (NULL);
	while (s1[c.i])
	{
		ret[c.i] = s1[c.i];
		c.i++;
	}
	while (s2[c.j])
	{
		ret[c.i + c.j] = s2[c.j];
		c.j++;
	}
	ret[c.i + c.j] = 0;
	free((void *)s1);
	free((void *)s2);
	return (ret);
}
