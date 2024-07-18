#include "get_next_line.h"

static char	*whole_line(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line < 0)
			return (0);
		else if (read_line == 0)
			break;
		buf[read_line] = '\0';
		if (backup == NULL)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		char_temp = NULL;
		if (ft_strchr(buf, '\n')
			break ;
	}
	return (backup);
}

static char second_line(char *string)
{
	size_t count;
	char *backup;

	count = 0;
	while(string[count] != '\n' || string[count] != '\0')
		count++;
	if (string[count] == '\0' || string[1] == '\0')
		return (0);
	backup = ft_substr(string, count + 1, (ft_strlen(string) - 1));
		if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	string[count + 1] = '\0';
	return (backup);
}

char *get_next_line(int fd)
{
	char	*string;
	char	*buf;
	char	*backup;

	if (fd < 0)
		return (0);

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == '\0')
		return (0);
	string = whole_line(fd, buf, backup);
	free(buf);
	buf = NULL;

	if (string == '\0')
		return (NULL);
	backup = second_line(string);
	return (string);
}
