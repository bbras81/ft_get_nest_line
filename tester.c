/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:08:14 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/04 13:08:32 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		fd;
	char	buf[256];
	int		chars_read;

	if (fd < 0)
		return (0);
	fd = open("tester.txt", O_RDONLY);
	while ((chars_read = read(fd, buf, 10)))
	{
		buf[chars_read] = '\0';
		printf("buf-> %s\n", buf);
	}
}
