/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:11:46 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/30 14:13:56 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	found_new_line(char *remainder)
{
	int	counter;

	counter = 0;
	if (!remainder)
		return (0);
	while (remainder[counter])
	{
		if (remainder[counter] == '\n')
			return (1);
		counter++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	counter;
	size_t	counter_s2;

	if (!s1)
		s1 = "";
	if ( !s2)
		return (NULL);
	counter = 0;
	counter_s2 = 0;
	str_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str_join)
		return (NULL);
	while (s1[counter])
	{
		str_join[counter] = s1[counter];
		counter++;
	}
	while (s2[counter_s2])
	{
		str_join[counter + counter_s2] = s2[counter_s2];
		counter_s2++;
	}
	str_join[counter + counter_s2] = '\0';
	return (str_join);
}

char	*extract_line(char *remainder)
{
	char	*new_line;
	int		counter_1;
	int		counter_2;

	if (!remainder || remainder[0] == '\0')
		return (NULL);
	counter_1 = 0;
	while (remainder[counter_1] && remainder[counter_1] != '\n')
		counter_1++;
	if (remainder[counter_1] == '\n')
		counter_1++;
	new_line = malloc(sizeof(char) * counter_1 + 1);
	if (!new_line)
		return (NULL);
	counter_2 = 0;
	while (counter_2 < counter_1)
	{
		new_line[counter_2] = remainder[counter_2];
		counter_2++;
	}
	new_line[counter_2] = '\0';
	return (new_line);
}

char	*update_remainder(char *remainder)
{
	char	*new_remainder;
	int		counter_1;
	int		counter_2;

	if (!remainder)
		return (NULL);
	counter_1 = 0;
	while (remainder[counter_1] && remainder[counter_1] != '\n')
		counter_1++;
	if (remainder[counter_1] == '\n')
		counter_1++;
	if (remainder[counter_1] == '\0')
	{
		free(remainder);
		return (NULL);
	}
	new_remainder = malloc((ft_strlen(remainder) - counter_1) + 1);
	counter_2 = 0;
	while (remainder[counter_1])
		new_remainder[counter_2++] = remainder[counter_1++];
	new_remainder[counter_2] = '\0';
	free(remainder);
	return (new_remainder);
}
