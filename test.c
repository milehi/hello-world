/*******************************
 * tester.c
 * author: Milehi
 * date: 6/6/2020
 *******************************/
#include <stdio.h>

int foo(int count, char *strings[])
{
   printf("%d arguments passed in:\n", count);
   for(int i = 0; i<count; i++)
   {
      printf("strings[%d] = %s\n", i, strings[i]);
   }
   return 0;
}

int main(int argc, char *argv[])
{
    printf("Hello World, %s\n", argv[0]);

    foo(argc, argv);

    return 0;
}
