/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbrep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:01:26 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/05/10 20:01:30 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnbrep(int *array, int len)
{
	int	i;
	int	j;
	int	*set;

	i = 0;
	set = (int *)malloc(len * sizeof(int));
	if (!set)
		return (-1);
	set[0] = array[0];
	while (i < len)
	{
		j = 0;
		while (set[j] && j < i)
			if (array[i] != set[j++])
				set[i] = array[i];
		else
			return (free(set), 1);
		i++;
	}
	free(set);
	return (0);
}
