#include <unistd.h>
#include <fcntl.h>    
#include <stdlib.h>   
#include <stdio.h>    
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Dosya açılamadı");
		return (1);
	}
	char *set = get_next_line(fd);
	printf("%s\n\n",set);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
    get_next_line(fd);
	close(fd);
	return (0);
}
