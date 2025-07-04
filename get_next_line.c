/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalkan <ikalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:47:45 by ikalkan           #+#    #+#             */
/*   Updated: 2025/07/04 17:21:02 by ikalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*read_and_stash(int fd, char *stash)
{
	char		buffer[BUFFER_SIZE + 1];
	ssize_t		readed_bytes;

	readed_bytes = 1;
	while (!found_newline(stash) && readed_bytes > 0)
	{
		readed_bytes = read(fd, buffer, BUFFER_SIZE);
		if (readed_bytes == -1)
			return (NULL);
		buffer[readed_bytes] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	return (stash);
}

int	found_endl(char *stash)
{
	if (!stash)
		return (0);
	if (ft_strchr(stash, '\n'))
		return (1);
	return (0);
}

char	*extract_line(char *stash);
{
	int	i;

	if (!stash || stash[0])
		return (NULL);
	
}





