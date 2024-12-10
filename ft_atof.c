/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 20:19:03 by kde-la-c          #+#    #+#             */
/*   Updated: 2024/12/09 20:19:06 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(char *str)
{
	double	sign;
	int		i;
	double	ret;
	double	dividend;

	dividend = 0.1f;
	i = 0;
	ret = (double)ft_atoi(str);
	sign = -1 + ((ret >= 0) * 2);
	if (ret < 0)
		ret *= -1.0f;
	str = ft_strchr(str, '.');
	if (!str)
		return (ret);
	i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		ret += ((str[i++] - 48) * dividend);
		dividend *= 0.1f;
	}
	return ((double)(ret * sign));
}
