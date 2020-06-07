#include <stdio.h>

void foo(int count)
{
   printf("%d arguments passed in", count);
}

int main(int argc, char *argv[])
{
    printf("Hello World, %s\n", argv[0]);

    foo(argc);

    return 0;
}
