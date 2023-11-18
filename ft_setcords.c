/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setcords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:01:46 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/11/18 03:01:49 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cords	ft_setcords(int r, int c)
{
	t_cords	ret;

	ret.r = r;
	ret.c = c;
	return (ret);
}
