/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 10:59:03 by brunmigu          #+#    #+#             */
/*   Updated: 2025/06/03 10:59:05 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif // !BUFFER_SIZE

# ifndef MAX_FD
#  define MAX_FD 1024
# endif // !MAX_FD

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		found_new_line(char *remainder);
char	*ft_strjoin(char const *s1, char const *s2);
char	*extract_line(char *remainder);
char	*update_remainder(char *remainder);
#endif
