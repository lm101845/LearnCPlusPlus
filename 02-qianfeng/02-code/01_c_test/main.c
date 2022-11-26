#include <stdio.h>

int main(int argc, char *argv[])
{
    char buf[128] = "";
    strcpy(buf, "hello c");
    printf("%s\n",buf);
    return 0;
}
