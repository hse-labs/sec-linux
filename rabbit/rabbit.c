#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
  int fd, rc;
  char *buffer = "TESTING A WRITE";
  fd = open("./afile", O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
  rc = write(fd, buffer, strlen(buffer));
  if (rc >= 0) {
    printf("Записано %d байт\n", rc);
  } else {
    printf("Ошибка записи в файл\n");
  }
  close(fd);
  exit(EXIT_SUCCESS);
}
