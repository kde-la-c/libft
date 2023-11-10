/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-la-c <kde-la-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:40:01 by kde-la-c          #+#    #+#             */
/*   Updated: 2023/02/04 23:40:04 by kde-la-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_start(char *buff, int *n)
{
	char	*ret;
	int		nlen;

	if (!ft_strchr(buff, '\n'))
		return (buff);
	nlen = ft_strchr(buff, '\n') - (buff - 1);
	if (nlen == (int)ft_strlen(buff))
	{
		*n = 2;
		return (buff);
	}
	ret = ft_substr(buff, 0, nlen);
	*n = 1;
	return (ret);
}

static char	*read_line(char *buff, int fd, int *n)
{
	char		*ret;
	char		*tmp;
	ssize_t		bsize;

	ret = NULL;
	bsize = 1;
	while (!*n && bsize > 0)
		if (!*buff)
			bsize = read(fd, buff, BUFFER_SIZE);
	else
	{
		tmp = get_start(buff, n);
		if (!ret)
			ret = ft_strdup(tmp);
		else
			ret = ft_strjoin_f1(ret, tmp);
		if (!*n)
			ft_bzero(buff, BUFFER_SIZE + 1);
	}
	if (*n == 1)
		free(tmp);
	if (bsize == -1)
		*n = bsize;
	return (ret);
}

char	*get_next_line(int fd)
{
	char		*ret;
	char		*tmp;
	char		buff[BUFFER_SIZE + 1];
	static char	rest[BUFFER_SIZE];
	int			n;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	ft_bzero(buff, BUFFER_SIZE + 1);
	ret = NULL;
	n = 0;
	if (rest[0])
	{
		ft_memmove(buff, rest, ft_strlen(rest));
		ft_bzero(rest, ft_strlen(rest));
	}
	ret = read_line(buff, fd, &n);
	if (n == 1)
	{
		tmp = ft_strchr(buff, '\n') + 1;
		ft_memmove(rest, tmp, ft_strlen(tmp));
	}
	if (n == -1)
		return (free(ret), NULL);
	return (ret);
}
