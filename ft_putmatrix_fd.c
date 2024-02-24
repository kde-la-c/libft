/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 23:13:21 by kde-la-c          #+#    #+#             */
/*   Updated: 2024/02/23 23:16:28 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putmatrix_fd(char **mat, int fd)
{
	int	i;
	int	ret;

	ret = 0;
	i = 0;
	while (mat[i])
	{
		ret += ft_putstr_fd(mat[i++], fd);
		ret += ft_putchar_fd('\n', fd);
	}
	return (ret);
}
