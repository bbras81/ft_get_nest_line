/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:04:17 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/04 13:08:32 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
int					len_to_new_line(t_list *list);
