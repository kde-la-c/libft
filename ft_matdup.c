/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:26:40 by kde-la-c          #+#    #+#             */
/*   Updated: 2024/10/09 23:26:58 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_matdup(void **mat)
{
	int		i;
	char	**ret;

	if (!mat)
		return (NULL);
	i = -1;
	ret = ft_calloc(ft_mathei((void **)mat) + 1, sizeof(char *));
	if (!ret)
		return (NULL);
	while (mat[++i])
	{
		ret[i] = ft_strdup(mat[i]);
		if (!ret[i])
			return (ft_dfree((void **)ret), NULL);
	}
	return (ret);
}
