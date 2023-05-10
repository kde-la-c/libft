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

int	ft_isnbrep(void *array, int len)
{
	int					i;
	// int					j;
	// long long	set[len];
	long long	*arr;

	i = 0;
	arr = (long long *)array;
	// set[0] = arr[0];
	while (i < len)
	{
		printf("%llu\n", arr[i++]);
	}
	return (0);
}

int main()
{
	long arr[4] = {444, 444, 0};

	printf("%i\n", ft_isnbrep(arr, 4));
	return 0;
}
