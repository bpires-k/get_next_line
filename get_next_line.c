/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 21:42:46 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/21 17:22:42 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*save_line(int fd, t_list *stack)
{
	int	chars_read;

	chars_read = 0;
	

	return (buffer);
}

char	*get_next_line(int fd)
{
	static t_list	*stack = NULL;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = save_line(fd, stack);
	if (!line)
		return (NULL);
	return (line);
}
