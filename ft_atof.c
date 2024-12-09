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

float	ft_atof(const char *str)
{
	int		sign;
	int		i;
	int		int_part;
	float	ret;
	float	dividend;

	dividend = 0.1;
	i = 0;
	ret = 0;
	ret += ft_atoi(str);
	while ((((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i]) || \
		(str[i] >= 48 && str[i] <= 57))
		i++;
	if (str[i] == '.')
		i++;
	if (!ft_isdigit(str[i]))
		return (ret);
	while (str[i] >= 48 && str[i] <= 57)
	{
		ret += ((str[i] - 48) * dividend);
		dividend *= 0.1;
		i++;
	}
	return (ret);
}

int main()
{
	char *str = "-0.0182";
	printf("%f\n%f\n", atof(str), ft_atof(str));
}
