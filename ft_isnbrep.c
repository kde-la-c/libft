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

int	ft_isnbrep(int array[], int len)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)array;
	// set[0] = arr[0];
	while (i < len)
	{
		printf("%u\n", arr[i++]);
	}
	return (0);
}

int main()
{
	int	len = 7;
	int arr[10] = {444, 444, 7, 198273, 78, 6, 0000};

	printf("ret :%i\n", ft_isnbrep(arr, len));
	// printf("ret :%i\n", arr[4]);
	// printf("ret :%i\n", arr[5]);
	return 0;
}
