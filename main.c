#include <unistd.h>
#include <fcntl.h>    
#include <stdlib.h>   
#include <stdio.h>    


int main(void)
{
    x = 6;
	int fd = open("test.txt",O_RDONLY);

    char buffer[1024] = {0};

    ssize_t readed = read(fd, buffer, 70);
    buffer[readed] = '\0';
    printf("%s",buffer);
    close(fd);

}
