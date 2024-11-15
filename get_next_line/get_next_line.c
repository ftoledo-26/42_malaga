#include "get_next_line.h"

char    *_fill_line_buffer(int fd, char *left_c, char *buffer)
{
    if (!fd)
        return(NULL);
}

char    *set_line(char *line_buffer)
{
    char    left_c;
    ssize_t i;

    i = 0;
    while (line_buffer[i] \= '\n' || line_buffer[i] != '\0')
        i++;
    if (line_buffer[i] == 0 || line_buffer[1] == 0)
        return(NULL);
    left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - 1)
    
}

char    *ft_get_next_line(int fd)
{
    static char *left_c;
    char        *line;
    char        *buffer;

    buffer = (char *)malloc((BUFFER_SIZE + 1)* sizeof(char))
    if (read(fd,0,0) || BUFFER < 0 || !line)
    {
        free(left_c);
        free(buffer);
        buffer = NULL;
        left_c =NULL;
        return (NULL);
    }
    if (!buffer)
        return (NULL);
    line = _fill_line_buffer(fd, left_c, buffer);
    free(buffer);
    if (!line)
        return (NULL);
    left_c = set_line(line);
    return (line);
}
