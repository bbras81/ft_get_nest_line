/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:34:37 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/27 13:05:11 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif // !BUFFER_SIZE

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		found_new_line(char *remainder);
char	*ft_strjoin(char const *s1, char const *s2);
char	*extract_line(char *remainder);
char	*update_remainder(char *remainder);
#endif
