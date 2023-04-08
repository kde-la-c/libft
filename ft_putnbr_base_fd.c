/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:00:26 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/04/08 19:00:36 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(int nbr, char *base, int fd)
{
	int		blen;

	blen = ft_strlen(base);
	if (blen < 2 || ft_ischrrep(base))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	else if (nbr < blen)
		write(fd, &base[nbr], 1);
	else if (nbr >= blen)
	{
		ft_putnbr_base_fd(nbr / blen, base, fd);
		ft_putnbr_base_fd(nbr % blen, base, fd);
	}
	return ;
}
