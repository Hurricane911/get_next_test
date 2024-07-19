#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>  // for O_RDONLY
#include <unistd.h> // for close
#include <stdlib.h>

int main()
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}

	close(fd);
	return (0);
}
