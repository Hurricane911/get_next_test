#include <stdio.h>
#include "get_next_line.h"


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

	fd = open("test2.txt", O_RDONLY);
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
}
