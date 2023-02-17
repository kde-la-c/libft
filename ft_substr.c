/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:07:42 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/19 00:07:45 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		rlen;
	char	*ret;

	i = 0;
	if (ft_strlen(s) >= start + len)
		rlen = len;
	else if (start > ft_strlen(s))
		rlen = 0;
	else
		rlen = ft_strlen(s) - start;
	ret = malloc(sizeof(char) * rlen + 1);
	if (!(ret))
		return (NULL);
	while (i < rlen)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
