#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

static char	*whole_line(int fd, char *buf, char *backup);
static char second_line(char *string);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char *get_next_line(int fd);

#endif
