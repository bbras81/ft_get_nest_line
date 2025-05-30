/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:11:27 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/27 11:49:36 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	*line;

	// int		chars_read;
	fd = open("tester.txt", O_RDONLY);
	if (fd < 0)
		return (0);
	// Aqui a função open só retorna o FD
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		// free(line);
	}
	close(fd);
	return (0);
}
