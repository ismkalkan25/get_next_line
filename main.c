#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>

int main(void)
{
    int fd;
    char *line;

    // read_error.txt yerine, izin verilmeyen bir fd yazabiliriz:
    fd = open("does_not_exist.txt", O_RDONLY);
    // veya bilerek malicious bir sd numarası kullan:
    if (fd != -1)
        close(fd);
    fd = -1;

    line = get_next_line(fd);
    printf("Line: [%s]\n", line);
    if (line)
        free(line);
    return (0);
}
