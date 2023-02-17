/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:39:46 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/01/21 17:39:52 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n >= 0 && n <= 9)
		return (++i);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;

	if (n == -2147483648)
		return (ret = ft_strdup("-2147483648"));
	i = ft_countchars(n);
	ret = malloc(sizeof(char) * i + 1);
	if (!(ret))
		return (NULL);
	ret[i--] = 0;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		ret[i--] = (n % 10) + 48;
		n /= 10;
	}
	if (n <= 9)
		ret[i--] = n + 48;
	if (!i)
		ret[i] = '-';
	return (ret);
}
