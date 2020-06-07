#include <stdio.h>

int foo(int count, char *strings[])
{
   printf("%d arguments passed in", count);
   return 0;
}

int main(int argc, char *argv[])
{
    printf("Hello World, %s\n", argv[0]);

    foo(argc);

    return 0;
}
