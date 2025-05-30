/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 21:52:07 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/30 21:54:08 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	char	*line1;
	char	*line2;

	fd1 = open("tester.txt", O_RDONLY);
	fd2 = open("tester1.txt", O_RDONLY);
	line1 = NULL;
	line2 = NULL;
	if (fd1 < 0 || fd2 < 0)
	{
		printf("Error opening files");
		return (1);
	}
	while (1)
	{
		line1 = get_next_line(fd1);
		if (line1)
		{
			printf("file1: %s", line1);
			free(line1);
		}
		line2 = get_next_line(fd2);
		if (line2)
		{
			printf("file2: %s", line2);
			free(line2);
		}
		if (!line1 && !line2)
			break ;
	}
	close(fd1);
	close(fd2);
	return (0);
}
