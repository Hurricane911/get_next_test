#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 1024
#endif


# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

#ifndef OPEN_MAX
#define OPEN_MAX 1024  // Define a reasonable limit if OPEN_MAX is not defined
#endif

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*get_next_line(int fd);

#endif