#include <stdio.h>
#include <sys/utsname.h>

int main(void)
{
    struct utsname name;

    if (uname(&name)) {
        perror("Ошибка вызова uname(): ");
        return 1;
    }

    printf("Моя ОС: %s!\n", name.sysname);
    return 0;
}
