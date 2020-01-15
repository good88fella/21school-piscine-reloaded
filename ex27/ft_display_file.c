/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktimika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:25:56 by ktimika           #+#    #+#             */
/*   Updated: 2019/09/03 21:17:17 by ktimika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		read_file(char *file)
{
	int		fd;
	int		ret;
	char	buff[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	while ((ret = read(fd, buff, BUF_SIZE)))
	{
		buff[ret] = '\0';
		write(1, buff, ret);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (read_file(argv[1]))
			return (1);
	}
	return (0);
}
